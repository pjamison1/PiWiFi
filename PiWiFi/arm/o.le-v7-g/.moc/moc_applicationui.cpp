/****************************************************************************
** Meta object code from reading C++ file 'applicationui.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/applicationui.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationui.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApplicationUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      44,   38,   14,   14, 0x05,
      71,   38,   14,   14, 0x05,
     149,  101,   14,   14, 0x05,
     233,  101,   14,   14, 0x05,
     389,  316,   14,   14, 0x05,
     484,  316,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     578,   14,   14,   14, 0x08,
     612,  604,   14,   14, 0x08,
     638,   14,   14,   14, 0x08,
     666,   14,   14,   14, 0x08,
     695,  604,   14,   14, 0x08,
     724,   14,   14,   14, 0x08,
     749,   14,   14,   14, 0x08,
     773,   14,   14,   14, 0x08,
     787,   14,   14,   14, 0x08,
     816,  804,   14,   14, 0x08,
     868,  856,   14,   14, 0x08,
     915,   14,   14,   14, 0x08,
     929,   14,   14,   14, 0x08,
     949,  941,   14,   14, 0x08,

 // methods: signature, parameters, type, tag, flags
     986,   14,   14,   14, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_ApplicationUI[] = {
    "ApplicationUI\0\0text\0message(QVariant)\0"
    "state\0scanStateChanged(QVariant)\0"
    "startedStateChanged(QVariant)\0"
    "timeStamp,macAddress,uuid,major,minor,rssi,loss\0"
    "iBeaconEnteredRange(QVariant,QVariant,QVariant,QVariant,QVariant,QVari"
    "ant,QVariant)\0"
    "iBeaconExitedRange(QVariant,QVariant,QVariant,QVariant,QVariant,QVaria"
    "nt,QVariant)\0"
    "timeStamp,macAddress,companyCode,companyName,beaconId,reserved,rssi,lo"
    "ss\0"
    "altBeaconEnteredRange(QVariant,QVariant,QVariant,QVariant,QVariant,QVa"
    "riant,QVariant,QVariant)\0"
    "altBeaconExitedRange(QVariant,QVariant,QVariant,QVariant,QVariant,QVar"
    "iant,QVariant,QVariant)\0"
    "onSystemLanguageChanged()\0address\0"
    "onAddScanRequest(QString)\0"
    "onEnableScanInvokeRequest()\0"
    "onDisableScanInvokeRequest()\0"
    "onRemoveScanRequest(QString)\0"
    "onStartHeadlessService()\0"
    "onStopHeadlessService()\0onConnected()\0"
    "onDisconnected()\0socketError\0"
    "onError(QLocalSocket::LocalSocketError)\0"
    "socketState\0onStateChanged(QLocalSocket::LocalSocketState)\0"
    "onReadyRead()\0onTimeout()\0request\0"
    "onInvoked(bb::system::InvokeRequest)\0"
    "resendNotification()\0"
};

void ApplicationUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApplicationUI *_t = static_cast<ApplicationUI *>(_o);
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->scanStateChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->startedStateChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->iBeaconEnteredRange((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7]))); break;
        case 4: _t->iBeaconExitedRange((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7]))); break;
        case 5: _t->altBeaconEnteredRange((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 6: _t->altBeaconExitedRange((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 7: _t->onSystemLanguageChanged(); break;
        case 8: _t->onAddScanRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onEnableScanInvokeRequest(); break;
        case 10: _t->onDisableScanInvokeRequest(); break;
        case 11: _t->onRemoveScanRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->onStartHeadlessService(); break;
        case 13: _t->onStopHeadlessService(); break;
        case 14: _t->onConnected(); break;
        case 15: _t->onDisconnected(); break;
        case 16: _t->onError((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        case 17: _t->onStateChanged((*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[1]))); break;
        case 18: _t->onReadyRead(); break;
        case 19: _t->onTimeout(); break;
        case 20: _t->onInvoked((*reinterpret_cast< const bb::system::InvokeRequest(*)>(_a[1]))); break;
        case 21: _t->resendNotification(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApplicationUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApplicationUI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApplicationUI,
      qt_meta_data_ApplicationUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApplicationUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApplicationUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApplicationUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationUI))
        return static_cast<void*>(const_cast< ApplicationUI*>(this));
    return QObject::qt_metacast(_clname);
}

int ApplicationUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void ApplicationUI::message(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApplicationUI::scanStateChanged(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ApplicationUI::startedStateChanged(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ApplicationUI::iBeaconEnteredRange(const QVariant & _t1, const QVariant & _t2, const QVariant & _t3, const QVariant & _t4, const QVariant & _t5, const QVariant & _t6, const QVariant & _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ApplicationUI::iBeaconExitedRange(const QVariant & _t1, const QVariant & _t2, const QVariant & _t3, const QVariant & _t4, const QVariant & _t5, const QVariant & _t6, const QVariant & _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ApplicationUI::altBeaconEnteredRange(const QVariant & _t1, const QVariant & _t2, const QVariant & _t3, const QVariant & _t4, const QVariant & _t5, const QVariant & _t6, const QVariant & _t7, const QVariant & _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ApplicationUI::altBeaconExitedRange(const QVariant & _t1, const QVariant & _t2, const QVariant & _t3, const QVariant & _t4, const QVariant & _t5, const QVariant & _t6, const QVariant & _t7, const QVariant & _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
