APP_NAME = PiWiFi
HEADLESS_SERVICE = $${APP_NAME}Service

CONFIG += qt warn_on cascades10

include(config.pri)

INCLUDEPATH += ../../$${HEADLESS_SERVICE}/src

LIBS += -lbb -lbbsystem -lQtNetwork -lbbdata 
