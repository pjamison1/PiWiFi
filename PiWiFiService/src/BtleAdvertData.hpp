/*
 * Copyright (c) 2016 Philip Ivan Jamison.
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

#ifndef BTLEADVERTDATA_HPP_
#define BTLEADVERTDATA_HPP_

#include <QObject>
#include <QDebug>
#include <nfc/nfc.h>
#include <stdint.h>

class BtleAdvertData: public QObject {

	Q_OBJECT

public:
	BtleAdvertData(QObject *obj = 0);
	virtual ~BtleAdvertData();

	bool parse(const QByteArray &advertData);
	bool hasBeaconData();
    bool hasIBeaconData();
    bool hasAltBeaconData();
	QByteArray & beaconUuid();
    QByteArray & beaconId();
	QString beaconUuidAsString();
	QString appUuidAsString();
    QString beaconIdAsString();
    //QString wifiMessage();
	int beaconMajor();
	int beaconMinor();
	int calibratedStrength();
	void clear();
	QString wifiMessage();
	int companyCode();
	int altBeaconReserved();
    QString companyCodeAsString();
    void wifi();
    void nfc();
    bool hasPiWiFi();

private:

    static const QString m_author; // for creating settings
    static const QString m_appName; // for creating settings
	/**
	 * iBeacon attributes
	 */
	QByteArray _advertData;
	QByteArray _beaconUuid;
	uint16_t _beaconMajor;
	uint16_t _beaconMinor;
	int8_t _calibratedStrength;
	bool _hasIBeaconData;
    /**
     * AltBeacon attributes
     */
    bool _hasAltBeaconData;
    uint16_t _beaconMfgCompanyCode;
    QByteArray _beaconId;
    uint8_t _beaconReserved;
    QString _wifiMessage;
    bool _hasPiWiFi;
    QVariant _qv;
    QByteArray pi3;
    QString uuidSettings;
    QString uuidBT;

};

#endif /* BTLEADVERTDATA_HPP_ */
