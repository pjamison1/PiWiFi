/*
 * Copyright (c) Philip Ivan Jamison.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "BtleAdvertData.hpp"
#include <wifi/wifi_service.h>
#include <nfc/nfc.h>
#include <bb/cascades/Application>
#include "appsettings.h"

const QString BtleAdvertData::m_author = "PIJ"; // for creating settings
const QString BtleAdvertData::m_appName = "PiWiFi"; // for creating settings


BtleAdvertData::BtleAdvertData(QObject *obj)
	: QObject(obj)
	, _advertData()
	, _beaconUuid("")
	, _beaconMajor(0)
	, _beaconMinor(0)
	, _calibratedStrength(0)
	, _hasIBeaconData(false)
    , _hasAltBeaconData(false)
    , _beaconMfgCompanyCode(0)
    , _beaconId()
    , _beaconReserved(0)
    , _wifiMessage("")
    , _hasPiWiFi(false)
    , _qv("")
    , pi3("")
    , uuidSettings("")
    , uuidBT("")
{
    qDebug() << "BBBB parse [ PIJ Start ]";
}

BtleAdvertData::~BtleAdvertData()
{
}

/*
	Sample data (iBeacon)

	Estimote data = 02 01 05 1a ff 4c 00 02 15 b9 40 7f 30 f5 f8 46 6e af f9 25 55 6b 57 fe 6d fa 46 b8 1a c2
	Sensor Tag               1A FF 4C 00 02 15 FA 5F 55 D9 BC 63 40 2E A2 54 09 1B 8F E8 C9 91 00 01 00 01 C5
	02 (AD Structure length)
	    01  (AD Type - flags)
	        05  (AD Data)
	1a  (AD Structure length)
	    ff  (AD Type - Manufacturer Specific Data)
	        4c 00 ( Apple Specific data  - little endian of 0x004c)
	        02 (iBeacon data follows)
	            15  ( 21 (dec) bytes)
	                b9 40 7f 30 f5 f8 46 6e af f9 25 55 6b 57 fe 6d ( BeconRegion UUID - fixed field 16 bytes)
	                fa 46  (Major Number - fixed field 16 bit integer - (big endian 64070)
	                b8 1a  (Minor Number - fixed field 16 bit integer - (big endian 47130)
	                c2 (Calibrated Strength -- power in dBm at 1m from device)


    AltBeacon (RIM MANF code) data = 1b ff 3c 00 be ac 02 15 b9 40 7f 30 f5 f8 46 6e af f9 25 55 6b 57 fe 6d fa 46 c2 00

    1b  (AD Structure length)
        ff  (AD Type - Manufacturer Specific Data)
            3c 00 ( RIM Specific data - little endian of 0x003c)
            be ac (Alt Beacon data follows big endian of 0xbeac)
               02 15 b9 40 7f 30 f5 f8 46 6e af f9 25 55 6b 57 fe 6d fa 46 ( Beacon Id 20 bytes )
               c2 (Reference -- Calibrated Strength -- power in dBm at 1m from device)
               00 (Reserved)
*/

bool BtleAdvertData::parse(const QByteArray &advertData)
{

    qDebug() << "BBBB parse [" << advertData.toHex() << "]";

	if (advertData.length() < 27) { // quick sanity check 27 is minimal length of iBeacon advertisment
		_hasIBeaconData = false;
		return true;
	}
	int i = 0;
	QString wf = "";

	do {
		uint8_t entryLen = advertData.at(i);
		uint8_t entryType = advertData.at(i+1);

		if (entryType == 0xff) {
			int j = i+2;
			if (((uint8_t)advertData.at(j) == 0x4c) && ((uint8_t)advertData.at(j+1) == 0x00) && ((uint8_t)advertData.at(j+2) == 0x02)&& ((uint8_t)advertData.at(j+3) == 0x15)) {
				_hasIBeaconData = true;
				_beaconUuid.clear();
				for (int k=0; k<16; k++) {
					_beaconUuid.append(advertData.at(k+j+4));
				}
				j += 20;
				_beaconMajor = 0;
				_beaconMajor  = (uint16_t)((uint8_t)advertData.at(j+1) & 0xff);
				_beaconMajor += (uint16_t)(((uint8_t)advertData.at(j) & 0xff) << 8);
				j += 2;
				_beaconMinor = 0;
				_beaconMinor  = (uint16_t)((uint8_t)advertData.at(j+1) & 0xff);
				_beaconMinor += (uint16_t)(((uint8_t)advertData.at(j) & 0xff) << 8);
				j += 2;
				_calibratedStrength = 0;
				_calibratedStrength = (int8_t) (advertData.at(j) & 0xff);
				//_wifiMessage = wifiMessage();
				wifi();
				nfc();
				return true;

			} else if (((uint8_t)advertData.at(j+2) == 0xbe)&& ((uint8_t)advertData.at(j+3) == 0xac)) {
                _hasAltBeaconData = true;
                _beaconMfgCompanyCode  = (uint16_t)((uint8_t)advertData.at(j) & 0xff);
                _beaconMfgCompanyCode += (uint16_t)(((uint8_t)advertData.at(j+1) & 0xff) << 8);
                _beaconId.clear();
                for (int k=0; k<20; k++) {
                    _beaconId.append(advertData.at(k+j+4));
                }
                j += 24;
                _calibratedStrength = 0;
                _calibratedStrength = (int8_t) (advertData.at(j) & 0xff);
                j += 1;
                _beaconReserved = (int8_t) (advertData.at(j) & 0xff);
                //_wifiMessage = wifiMessage();
                wifi();
                nfc();
                return true;
			}
		}
		i += (entryLen+1);
	} while (i < advertData.length());

	_hasIBeaconData = false;
	return true;
}

QByteArray & BtleAdvertData::beaconUuid()
{
	return _beaconUuid;
}


//  DO WIFI WORK HERE
void BtleAdvertData::wifi()  {
    int wifirc;  // used by philip to check for return code
    //int wifi_status;

    _wifiMessage = "Wifi Function called";
    _hasPiWiFi = false;

    //! [0]
    // copied from working wheresmybeacon app.
    QCoreApplication::setOrganizationName("PIJ");
    QCoreApplication::setApplicationName("WHERESMYBEACON");

    //QSettings s(m_author,m_appName);
    //QSettings s;
    AppSettings as;
    _qv = as.uuid(); //  ("uuid", "88e24053954894961ecff021bd605560") ;
    uuidSettings =  _qv.toByteArray() ;
    qDebug() << "PIJ  PIJ pi3 ["  << pi3 << "]";
    // copy ends here


    // get uuid from Settings
    //QCoreApplication::setOrganizationName("PIJ");
    //QCoreApplication::setApplicationName("PiWiFi");
    //QCoreApplication::setOrganizationDomain("bottear.co.uk");

    QSettings s(m_author,m_appName);
    //QString msg = s.value("msg", "none_btsrc").toString();
    //QByteArray pi3 =  s.value("uuid", "3088e24053954894961ecff021bd6055").toByteArray();
    // try making a quuid
    //QUuid qu = new QUuid(&pi3);
    // try to cast it
    _qv = s.value("uuid", "3088e24053954894961ecff021bd6055") ;

    pi3 =  _qv.toByteArray() ;

    qDebug() << "PIJ  PIJ pi3 []";

    //QByteArray pi3 =  s.value("uuid", "3088e24053954894961ecff021bd6055") ;

    /*
     *
     *  # DONT FORGET TO CLEAN AND BUILD BOTH PROJECTS
     * */

    // THIS LINES WORKS.
    //QByteArray piHardCode = QByteArray::fromHex("3088e24053954894961ecff021bd6055");

    //QString uuidBT = QString::fromUtf8(piHardCode,-1);
    //QString uuidSettings = QString::fromUtf8(pi3,-1);


    // just for help - below
    //_beacon_uuid = QByteArray(beacon_uuid).toHex();

    //qDebug() << "PIJ PIJ UUIDBT :  [" << uuidBT << "]";
    //qDebug() << "PIJ PIJ UUIDSETTINGS :  [" << uuidSettings << "]";

    // fire the bluetooth one into string the same way.

    //uuidBT = QString::fromUtf8(_beaconUuid,-1);

    // try to build two comparable strings here.
    //_beaconUuid.clear();

    /*
    uuidBT = "";
    for (int k=0; k<16; k++) {
        uuidBT.append(_beaconUuid.at(k));
    }
    uuidSettings = "";
    for (int kk=0; kk<16; kk++) {
        uuidSettings.append(pi3.at(kk));
    }
     */



   // from wheresmybeacon
    uuidBT = beaconUuidAsString();
    /*if (pi3 == uuidBT)
    {
        mloopcounter = 99;
    }*/



    //if (_beaconUuid == pi3|| _beaconId == pi3 || _beaconUuid == piHardCode) {
    //if (uuidBT.compare(uuidSettings) == 0, Qt::CaseInsensitive) {
    if (uuidBT ==  uuidSettings )  {
         _hasPiWiFi = true;
         _wifiMessage = "Wifi Beacon matched...";

        //code example

        wifi_status_t wifiStatus = WIFI_STATUS_RADIO_OFF;
        int result = wifi_get_status(&wifiStatus);
        if (result == WIFI_SUCCESS) {
        if (wifiStatus == WIFI_STATUS_RADIO_OFF) {
        // The STA mode is off, turn it on...
            wifirc = wifi_set_sta_power(true);
            if (wifirc == 0 ) {
                _wifiMessage =  "Wifi turned on by PiWiFi";
            } else {
                _wifiMessage =  "Wifi Not turned on.";
            }

        } else if (wifiStatus == WIFI_STATUS_RADIO_ON) {
        // The device is in client STA operational mode
            _wifiMessage =  "WiFi already on, when entered beacon";
        } else if (wifiStatus == WIFI_STATUS_BUSY) {
        // The device is in MHS operational mode
            _wifiMessage =  "WiFi Busy";
        } else {
        // Unknown status
            _wifiMessage =  "WiFi unknown status";
        }
        } else {
        // An error occurred with wifi_get_status()
            _wifiMessage =  "Error Occurred with WiFi Get Status";
        }
        // debug ONLY
        //_wifiMessage =  msg;


    }
    else {
        _wifiMessage = "Sorry, UUID doesn't match" ;
    }

}

//  DO WIFI WORK HERE
void BtleAdvertData::nfc()  {
    nfc_result_t result = nfc_connect();
    qDebug() << "Connect" << result;
    result = nfc_set_setting(NFC_SETTING_ENABLED, true);
    qDebug() << "Set" << result;
}


QString BtleAdvertData::wifiMessage()  {
        return _wifiMessage;
    }


QString BtleAdvertData::beaconUuidAsString()
{
	QString uuid("");
   // int wifirc;  // used by philip to check for return code

	QByteArray estimote = QByteArray::fromHex("b9407f30f5f8466eaff925556b57fe6d");

	//QByteArray philpi3 = QByteArray::fromHex("3088e24053954894961ecff021bd6055");

	if (_beaconUuid == estimote) {
		return "Default Estimote UUID";
	}
	for (int i = 0; i < _beaconUuid.length(); i++) {
	    uuid.append(QString("%1").arg((uint8_t)_beaconUuid.at(i), 0, 16));
	}
	return uuid;
}

// convert setings uuid here
QString BtleAdvertData::appUuidAsString()
{
    /*for (int i = 0; i < _beaconUuid.length(); i++) {
            uuid.append(QString("%1").arg((uint8_t)_beaconUuid.at(i), 0, 16));
        }*/
    return uuidSettings;
}


int BtleAdvertData::beaconMajor()
{
	return (int)_beaconMajor;
}

int BtleAdvertData::beaconMinor()
{
	return (int)_beaconMinor;
}

int BtleAdvertData::calibratedStrength()
{
	return (int)_calibratedStrength;
}

bool BtleAdvertData::hasBeaconData()
{
	return hasIBeaconData() || hasAltBeaconData();
}



bool BtleAdvertData::hasPiWiFi()
{
    return _hasPiWiFi;
}

bool BtleAdvertData::hasIBeaconData()
{
    return _hasIBeaconData;
}

void BtleAdvertData::clear()
{
	_advertData.clear();

	_beaconUuid.clear();
	_beaconMajor = 0;
	_beaconMinor = 0;
	_calibratedStrength = 0;
	_hasIBeaconData = false;

    _hasAltBeaconData = false;
    _beaconMfgCompanyCode = 0;
    _beaconId.clear();
    _beaconReserved = 0;

    _wifiMessage = "";

}

QByteArray & BtleAdvertData::beaconId()
{
    return _beaconId;
}

bool BtleAdvertData::hasAltBeaconData()
{
    return _hasAltBeaconData;
}

int BtleAdvertData::companyCode()
{
    return (int)_beaconMfgCompanyCode;
}

int BtleAdvertData::altBeaconReserved()
{
    return (int)_beaconReserved;
}

QString BtleAdvertData::beaconIdAsString()
{
    QString id("");
    for (int i = 0; i < _beaconId.length(); i++) {
        id.append(QString("%1").arg((uint8_t)_beaconId.at(i), 0, 16));
    }
    return id;
}

QString BtleAdvertData::companyCodeAsString()
{
    QString company = "pij";

    switch (companyCode()) {
        case 60:
            company = "BlackBerry Ltd.";
            break;
        case 76:
            company = "Apple Inc.";
            break;
        case 280:
            company = "Nokia Maybe?";
            break;
        default:
            break;
    }

    return company;
}


