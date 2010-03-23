/****************************************************************************
** Meta object code from reading C++ file 'result.h'
**
** Created: Mon Mar 22 17:17:46 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qplaydarclient/include/qplaydar/result.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'result.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Playdar__Result[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      24,   16, 0x0a095103,
      28,   16, 0x0a095103,
      35,   16, 0x0a095103,
      41,   16, 0x0a095103,
      47,   16, 0x0a095103,
      56,   16, 0x0a095103,
      67,   63, 0x02095103,
      72,   63, 0x02095103,
      80,   63, 0x02095103,
      95,   89, 0x87095103,

       0        // eod
};

static const char qt_meta_stringdata_Playdar__Result[] = {
    "Playdar::Result\0QString\0sid\0artist\0"
    "album\0track\0mimetype\0source\0int\0size\0"
    "bitrate\0duration\0float\0score\0"
};

const QMetaObject Playdar::Result::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Playdar__Result,
      qt_meta_data_Playdar__Result, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Playdar::Result::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Playdar::Result::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Playdar::Result::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Playdar__Result))
        return static_cast<void*>(const_cast< Result*>(this));
    return QObject::qt_metacast(_clname);
}

int Playdar::Result::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = sid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = artist(); break;
        case 2: *reinterpret_cast< QString*>(_v) = album(); break;
        case 3: *reinterpret_cast< QString*>(_v) = track(); break;
        case 4: *reinterpret_cast< QString*>(_v) = mimetype(); break;
        case 5: *reinterpret_cast< QString*>(_v) = source(); break;
        case 6: *reinterpret_cast< int*>(_v) = size(); break;
        case 7: *reinterpret_cast< int*>(_v) = bitrate(); break;
        case 8: *reinterpret_cast< int*>(_v) = duration(); break;
        case 9: *reinterpret_cast< float*>(_v) = score(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSid(*reinterpret_cast< QString*>(_v)); break;
        case 1: setArtist(*reinterpret_cast< QString*>(_v)); break;
        case 2: setAlbum(*reinterpret_cast< QString*>(_v)); break;
        case 3: setTrack(*reinterpret_cast< QString*>(_v)); break;
        case 4: setMimetype(*reinterpret_cast< QString*>(_v)); break;
        case 5: setSource(*reinterpret_cast< QString*>(_v)); break;
        case 6: setSize(*reinterpret_cast< int*>(_v)); break;
        case 7: setBitrate(*reinterpret_cast< int*>(_v)); break;
        case 8: setDuration(*reinterpret_cast< int*>(_v)); break;
        case 9: setScore(*reinterpret_cast< float*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
