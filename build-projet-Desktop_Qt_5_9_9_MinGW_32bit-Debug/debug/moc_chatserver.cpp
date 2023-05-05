/****************************************************************************
** Meta object code from reading C++ file 'chatserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projet/chatserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Chatserver_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Chatserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Chatserver_t qt_meta_stringdata_Chatserver = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Chatserver"
QT_MOC_LITERAL(1, 11, 15), // "onNewConnection"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "onReadyRead"
QT_MOC_LITERAL(4, 40, 14), // "onDisconnected"
QT_MOC_LITERAL(5, 55, 18), // "newMessageReceived"
QT_MOC_LITERAL(6, 74, 6), // "sender"
QT_MOC_LITERAL(7, 81, 9), // "recipient"
QT_MOC_LITERAL(8, 91, 7) // "message"

    },
    "Chatserver\0onNewConnection\0\0onReadyRead\0"
    "onDisconnected\0newMessageReceived\0"
    "sender\0recipient\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Chatserver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    3,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,

       0        // eod
};

void Chatserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Chatserver *_t = static_cast<Chatserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNewConnection(); break;
        case 1: _t->onReadyRead(); break;
        case 2: _t->onDisconnected(); break;
        case 3: _t->newMessageReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject Chatserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Chatserver.data,
      qt_meta_data_Chatserver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Chatserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chatserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Chatserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Chatserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
