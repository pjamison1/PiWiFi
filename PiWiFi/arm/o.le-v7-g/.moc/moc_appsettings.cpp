/****************************************************************************
** Meta object code from reading C++ file 'appsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/appsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x05,
      57,   49,   12,   12, 0x05,
      91,   78,   12,   12, 0x05,
     139,  117,   12,   12, 0x05,
     179,  175,   12,   12, 0x05,
     204,  199,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     225,   49,   12,   12, 0x0a,
     242,   13,   12,   12, 0x0a,
     262,   78,   12,   12, 0x0a,
     284,  117,   12,   12, 0x0a,
     316,  175,   12,   12, 0x0a,
     332,  199,   12,   12, 0x0a,

 // properties: name, type, flags
      49,  349, 0x01495903,
      13,  354, 0x02495903,
      78,  349, 0x01495903,
     117,  358, 0x87495103,
     175,  364, 0x0a495903,
     199,  364, 0x0a495903,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       4,
       5,

       0        // eod
};

static const char qt_meta_stringdata_AppSettings[] = {
    "AppSettings\0\0powerDivert\0"
    "powerDivertChanged(int)\0gravity\0"
    "gravityChanged(bool)\0uranuscanner\0"
    "uranuscannerChanged(bool)\0"
    "warpDriveSpeedScanner\0"
    "warpDriveSpeedScannerChanged(float)\0"
    "msg\0msgChanged(QString)\0uuid\0"
    "uuidChanged(QString)\0setGravity(bool)\0"
    "setPowerDivert(int)\0setUranuscanner(bool)\0"
    "setWarpDriveSpeedScanner(float)\0"
    "setMsg(QString)\0setUuid(QString)\0bool\0"
    "int\0float\0QString\0"
};

void AppSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AppSettings *_t = static_cast<AppSettings *>(_o);
        switch (_id) {
        case 0: _t->powerDivertChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->gravityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->uranuscannerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->warpDriveSpeedScannerChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->msgChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->uuidChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setGravity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setPowerDivert((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setUranuscanner((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setWarpDriveSpeedScanner((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->setMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setUuid((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AppSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppSettings,
      qt_meta_data_AppSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppSettings))
        return static_cast<void*>(const_cast< AppSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int AppSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = gravity(); break;
        case 1: *reinterpret_cast< int*>(_v) = powerDivert(); break;
        case 2: *reinterpret_cast< bool*>(_v) = uranuscanner(); break;
        case 3: *reinterpret_cast< float*>(_v) = warpDriveSpeedScanner(); break;
        case 4: *reinterpret_cast< QString*>(_v) = msg(); break;
        case 5: *reinterpret_cast< QString*>(_v) = uuid(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGravity(*reinterpret_cast< bool*>(_v)); break;
        case 1: setPowerDivert(*reinterpret_cast< int*>(_v)); break;
        case 2: setUranuscanner(*reinterpret_cast< bool*>(_v)); break;
        case 3: setWarpDriveSpeedScanner(*reinterpret_cast< float*>(_v)); break;
        case 4: setMsg(*reinterpret_cast< QString*>(_v)); break;
        case 5: setUuid(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AppSettings::powerDivertChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppSettings::gravityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AppSettings::uranuscannerChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AppSettings::warpDriveSpeedScannerChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AppSettings::msgChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AppSettings::uuidChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
