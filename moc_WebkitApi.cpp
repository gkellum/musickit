/****************************************************************************
** Meta object code from reading C++ file 'WebkitApi.h'
**
** Created: Mon Mar 22 18:06:21 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "WebkitApi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebkitApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebkitApi[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,
      27,   10,   10,   10, 0x05,
      48,   10,   10,   10, 0x05,
      63,   10,   10,   10, 0x05,
      82,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,   10,   10,   10, 0x0a,
     120,   10,   10,   10, 0x0a,
     135,   10,   10,   10, 0x0a,
     149,   10,   10,   10, 0x0a,
     156,   10,   10,   10, 0x0a,
     173,  169,   10,   10, 0x0a,
     190,   10,   10,   10, 0x08,
     205,   10,   10,   10, 0x08,
     245,   11,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebkitApi[] = {
    "WebkitApi\0\0,\0tick(int,int)\0"
    "stateChange(QString)\0buffering(int)\0"
    "volumeChanged(int)\0result(QString,QString)\0"
    "togglePause()\0setVolume(int)\0play(QString)\0"
    "stop()\0log(QString)\0str\0resolve(QString)\0"
    "attachObject()\0reemitStatusChanged(Playengine::STATUS)\0"
    "onResult(Playdar::q_ptr,Playdar::r_ptr)\0"
};

const QMetaObject WebkitApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebkitApi,
      qt_meta_data_WebkitApi, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebkitApi::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebkitApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebkitApi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebkitApi))
        return static_cast<void*>(const_cast< WebkitApi*>(this));
    return QObject::qt_metacast(_clname);
}

int WebkitApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: stateChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: buffering((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: result((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: togglePause(); break;
        case 6: setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: play((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: stop(); break;
        case 9: log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: resolve((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: attachObject(); break;
        case 12: reemitStatusChanged((*reinterpret_cast< Playengine::STATUS(*)>(_a[1]))); break;
        case 13: onResult((*reinterpret_cast< Playdar::q_ptr(*)>(_a[1])),(*reinterpret_cast< Playdar::r_ptr(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void WebkitApi::tick(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebkitApi::stateChange(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebkitApi::buffering(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WebkitApi::volumeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WebkitApi::result(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE