/****************************************************************************
** Meta object code from reading C++ file 'playengine.h'
**
** Created: Mon Mar 22 17:17:47 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "player/playengine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Playengine[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      24,   11,   11,   11, 0x05,
      58,   11,   11,   11, 0x05,
      75,   73,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   11,   11,   11, 0x0a,
     107,  103,   11,   11, 0x0a,
     118,   11,   11,   11, 0x0a,
     127,  125,   11,   11, 0x0a,
     160,  142,   11,   11, 0x08,
     207,  202,   11,   11, 0x08,
     231,  224,   11,   11, 0x08,
     266,  142,   11,   11, 0x08,
     312,   11,   11,   11, 0x08,
     328,   11,   11,   11, 0x08,
     347,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Playengine[] = {
    "Playengine\0\0volume(int)\0"
    "statusChanged(Playengine::STATUS)\0"
    "buffering(int)\0,\0tick(int,int)\0"
    "togglePause()\0url\0play(QUrl)\0stop()\0"
    "v\0setVolume(int)\0newState,oldState\0"
    "stateChanged(Phonon::State,Phonon::State)\0"
    "time\0tickslot(qint64)\0source\0"
    "sourceChanged(Phonon::MediaSource)\0"
    "metaStateChanged(Phonon::State,Phonon::State)\0"
    "aboutToFinish()\0bufferPercent(int)\0"
    "volumeChanged(qreal)\0"
};

const QMetaObject Playengine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Playengine,
      qt_meta_data_Playengine, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Playengine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Playengine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Playengine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Playengine))
        return static_cast<void*>(const_cast< Playengine*>(this));
    return QObject::qt_metacast(_clname);
}

int Playengine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: volume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: statusChanged((*reinterpret_cast< Playengine::STATUS(*)>(_a[1]))); break;
        case 2: buffering((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: tick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: togglePause(); break;
        case 5: play((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: stop(); break;
        case 7: setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: stateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 9: tickslot((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: sourceChanged((*reinterpret_cast< const Phonon::MediaSource(*)>(_a[1]))); break;
        case 11: metaStateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 12: aboutToFinish(); break;
        case 13: bufferPercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Playengine::volume(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Playengine::statusChanged(Playengine::STATUS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Playengine::buffering(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Playengine::tick(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
