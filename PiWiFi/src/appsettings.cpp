/* Copyright (c) 2013 BlackBerry Limited.
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
#include "appsettings.h"
#include <QCoreApplication>
#include <QDebug>
#include <QSettings>

// Setting default values.
const bool AppSettings::mDefaultGravity(false);
const int AppSettings::mDefaultPowerDivert(0);
const bool AppSettings::mDefaultUranusscanner(false);
const float AppSettings::mDefaultWarpDriveSpeedScanner(0.0f);
const QString AppSettings::mDefaultMsg("df_wifi1");
const QString AppSettings::mDefaultUuid("3088e24053954894961ecff021bd6055");

// Settings keys.
const QString AppSettings::STARSHIP_GRAVITY_KEY("gravity");
const QString AppSettings::STARSHIP_POWERDIVERT_KEY("powerdivert");
const QString AppSettings::STARSHIP_URANUSSCANNER_KEY("uranuscanner");
const QString AppSettings::STARSHIP_WARPDRIVESPEEDSCANNER_KEY("warpDriveSpeedScanner");
const QString AppSettings::WIFI_KEY("wfmsg");
const QString AppSettings::WIFI_UUID("uuid");

AppSettings::AppSettings(QObject* parent) : QObject(parent)

{
    // Set up the QSettings object for the application with organization and application name.

    QCoreApplication::setOrganizationName("PIJ");
    QCoreApplication::setApplicationName("PiWiFi");

    // Load the values from QSettings or set as the default values if not yet set.
    mGravity = QSettings().value(STARSHIP_GRAVITY_KEY, mDefaultGravity).toBool();
    mPowerDivert =QSettings().value(STARSHIP_POWERDIVERT_KEY, mDefaultPowerDivert).toInt();
    mUranuscanner = QSettings().value(STARSHIP_URANUSSCANNER_KEY, mDefaultUranusscanner).toBool();
    mWarpDriveSpeedScanner = QSettings().value(STARSHIP_WARPDRIVESPEEDSCANNER_KEY, mDefaultWarpDriveSpeedScanner).toFloat();
    mMsg = QSettings().value(WIFI_KEY, mDefaultMsg).toString();
}

bool AppSettings::gravity() const
{
    return mGravity;
}

int AppSettings::powerDivert() const
{
    return mPowerDivert;
}

bool AppSettings::uranuscanner() const
{
    return mUranuscanner;
}

float AppSettings::warpDriveSpeedScanner() const
{
    return mWarpDriveSpeedScanner;
}

QString AppSettings::msg() const
{
    return mMsg;
}

QString AppSettings::uuid() const
{
    return mUuid;
}


void AppSettings::setGravity(bool gravity)
{
    if (mGravity != gravity) {
        QSettings().setValue(STARSHIP_GRAVITY_KEY, gravity);
        mGravity = gravity;
        emit gravityChanged(gravity);
    }
}

void AppSettings::setPowerDivert(int powerDivert)
{
    if(mPowerDivert != powerDivert) {
        QSettings().setValue(STARSHIP_POWERDIVERT_KEY, powerDivert);
        mPowerDivert = powerDivert;
        emit gravityChanged(powerDivert);
    }
}

void AppSettings::setUranuscanner(bool uranuscanner)
{
    if (mUranuscanner != uranuscanner) {
        QSettings().setValue(STARSHIP_URANUSSCANNER_KEY, uranuscanner);
        mUranuscanner = uranuscanner;
        emit uranuscannerChanged(uranuscanner);
    }
}

void AppSettings::setWarpDriveSpeedScanner(float warpDriveSpeedScanner)
{
    if (mWarpDriveSpeedScanner != warpDriveSpeedScanner) {
        QSettings().setValue(STARSHIP_WARPDRIVESPEEDSCANNER_KEY, QVariant(warpDriveSpeedScanner));
        mWarpDriveSpeedScanner = warpDriveSpeedScanner;
        emit warpDriveSpeedScannerChanged(warpDriveSpeedScanner);
    }
}

void AppSettings::setMsg(QString msg)
{
    if (mMsg != msg) {
        QSettings().setValue(WIFI_KEY, msg);
        mMsg = msg;
        emit msgChanged(msg);
    }
}
void AppSettings::setUuid(QString uuid)
{
    if (mUuid != uuid) {
        QSettings().setValue(WIFI_UUID, uuid);
        mUuid = uuid;
        emit uuidChanged(uuid);
    }
}


