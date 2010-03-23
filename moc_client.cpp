/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created: Mon Mar 22 17:17:43 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qplaydarclient/include/qplaydar/client.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Playdar__Client[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      42,   16,   16,   16, 0x05,
      62,   60,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,  102,   16,   16, 0x0a,
     127,  123,   16,   16, 0x0a,
     152,  150,  142,   16, 0x0a,
     169,  102,  142,   16, 0x0a,
     188,   16,   16,   16, 0x08,
     212,   16,   16,   16, 0x08,
     234,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Playdar__Client[] = {
    "Playdar::Client\0\0handshakeOk(QVariantMap)\0"
    "handshakeFailed()\0,\0"
    "onResult(Playdar::q_ptr,Playdar::r_ptr)\0"
    "str\0resolve(QString)\0qry\0resolve(q_ptr)\0"
    "QString\0r\0resultUrl(r_ptr)\0"
    "resultUrl(QString)\0handshakeCallFinished()\0"
    "resolveCallFinished()\0cometReadyRead()\0"
};

const QMetaObject Playdar::Client::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Playdar__Client,
      qt_meta_data_Playdar__Client, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Playdar::Client::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Playdar::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Playdar::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Playdar__Client))
        return static_cast<void*>(const_cast< Client*>(this));
    return QObject::qt_metacast(_clname);
}

int Playdar::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handshakeOk((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 1: handshakeFailed(); break;
        case 2: onResult((*reinterpret_cast< Playdar::q_ptr(*)>(_a[1])),(*reinterpret_cast< Playdar::r_ptr(*)>(_a[2]))); break;
        case 3: resolve((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: resolve((*reinterpret_cast< q_ptr(*)>(_a[1]))); break;
        case 5: { QString _r = resultUrl((*reinterpret_cast< r_ptr(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = resultUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: handshakeCallFinished(); break;
        case 8: resolveCallFinished(); break;
        case 9: cometReadyRead(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Playdar::Client::handshakeOk(QVariantMap _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Playdar::Client::handshakeFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Playdar::Client::onResult(Playdar::q_ptr _t1, Playdar::r_ptr _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
