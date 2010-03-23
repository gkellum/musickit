/****************************************************************************
** Meta object code from reading C++ file 'query.h'
**
** Created: Mon Mar 22 17:17:45 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qplaydarclient/include/qplaydar/query.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'query.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Playdar__Query[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x05,

 // properties: name, type, flags
      53,   45, 0x0a095103,
      57,   45, 0x0a095103,
      64,   45, 0x0a095103,
      70,   45, 0x0a095103,
      80,   76, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_Playdar__Query[] = {
    "Playdar::Query\0\0res\0onResult(Playdar::r_ptr)\0"
    "QString\0qid\0artist\0album\0track\0int\0"
    "duration\0"
};

const QMetaObject Playdar::Query::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Playdar__Query,
      qt_meta_data_Playdar__Query, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Playdar::Query::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Playdar::Query::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Playdar::Query::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Playdar__Query))
        return static_cast<void*>(const_cast< Query*>(this));
    return QObject::qt_metacast(_clname);
}

int Playdar::Query::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onResult((*reinterpret_cast< Playdar::r_ptr(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = qid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = artist(); break;
        case 2: *reinterpret_cast< QString*>(_v) = album(); break;
        case 3: *reinterpret_cast< QString*>(_v) = track(); break;
        case 4: *reinterpret_cast< int*>(_v) = duration(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setQid(*reinterpret_cast< QString*>(_v)); break;
        case 1: setArtist(*reinterpret_cast< QString*>(_v)); break;
        case 2: setAlbum(*reinterpret_cast< QString*>(_v)); break;
        case 3: setTrack(*reinterpret_cast< QString*>(_v)); break;
        case 4: setDuration(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Playdar::Query::onResult(Playdar::r_ptr _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
