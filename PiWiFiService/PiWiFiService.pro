APP_NAME = PiWiFiService

CONFIG += qt warn_on

include(config.pri)

LIBS += -lbb -lbbsystem -lbbplatform
LIBS += -lbtapi -lbbcascades -lQtNetwork -lbbdata -lnfc -lbb 


