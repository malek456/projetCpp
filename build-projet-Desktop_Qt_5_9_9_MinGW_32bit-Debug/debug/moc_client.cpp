/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projet/client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_client_t {
    QByteArrayData data[23];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_client_t qt_meta_stringdata_client = {
    {
QT_MOC_LITERAL(0, 0, 6), // "client"
QT_MOC_LITERAL(1, 7, 24), // "on_pushButton_15_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "on_pushButton_21_clicked"
QT_MOC_LITERAL(4, 58, 18), // "on_ajouter_clicked"
QT_MOC_LITERAL(5, 77, 20), // "on_supprimer_clicked"
QT_MOC_LITERAL(6, 98, 22), // "on_supprimer_2_clicked"
QT_MOC_LITERAL(7, 121, 23), // "on_tab_client_activated"
QT_MOC_LITERAL(8, 145, 5), // "index"
QT_MOC_LITERAL(9, 151, 19), // "on_modifier_clicked"
QT_MOC_LITERAL(10, 171, 36), // "on_recherche_2_cursorPosition..."
QT_MOC_LITERAL(11, 208, 4), // "arg1"
QT_MOC_LITERAL(12, 213, 4), // "arg2"
QT_MOC_LITERAL(13, 218, 5), // "print"
QT_MOC_LITERAL(14, 224, 9), // "QPrinter*"
QT_MOC_LITERAL(15, 234, 7), // "printer"
QT_MOC_LITERAL(16, 242, 14), // "sauvegarderPDF"
QT_MOC_LITERAL(17, 257, 14), // "on_imp_clicked"
QT_MOC_LITERAL(18, 272, 18), // "on_facture_clicked"
QT_MOC_LITERAL(19, 291, 16), // "on_pdf_3_clicked"
QT_MOC_LITERAL(20, 308, 16), // "on_imp_2_clicked"
QT_MOC_LITERAL(21, 325, 20), // "on_facture_2_clicked"
QT_MOC_LITERAL(22, 346, 20) // "on_facture_3_clicked"

    },
    "client\0on_pushButton_15_clicked\0\0"
    "on_pushButton_21_clicked\0on_ajouter_clicked\0"
    "on_supprimer_clicked\0on_supprimer_2_clicked\0"
    "on_tab_client_activated\0index\0"
    "on_modifier_clicked\0"
    "on_recherche_2_cursorPositionChanged\0"
    "arg1\0arg2\0print\0QPrinter*\0printer\0"
    "sauvegarderPDF\0on_imp_clicked\0"
    "on_facture_clicked\0on_pdf_3_clicked\0"
    "on_imp_2_clicked\0on_facture_2_clicked\0"
    "on_facture_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_client[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    1,   99,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    2,  103,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    0,  113,    2, 0x08 /* Private */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,
      21,    0,  116,    2, 0x08 /* Private */,
      22,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        client *_t = static_cast<client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_15_clicked(); break;
        case 1: _t->on_pushButton_21_clicked(); break;
        case 2: _t->on_ajouter_clicked(); break;
        case 3: _t->on_supprimer_clicked(); break;
        case 4: _t->on_supprimer_2_clicked(); break;
        //case 5: _t->on_tab_client_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_modifier_clicked(); break;
        case 7: _t->on_recherche_2_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        //case 9: _t->sauvegarderPDF(); break;
        case 10: _t->on_imp_clicked(); break;
        case 11: _t->on_facture_clicked(); break;
        //case 12: _t->on_pdf_3_clicked(); break;
        case 13: _t->on_imp_2_clicked(); break;
        case 14: _t->on_facture_2_clicked(); break;
        case 15: _t->on_facture_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject client::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_client.data,
      qt_meta_data_client,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_client.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
