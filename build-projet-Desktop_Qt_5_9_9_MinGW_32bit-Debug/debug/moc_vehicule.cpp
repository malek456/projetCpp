/****************************************************************************
** Meta object code from reading C++ file 'vehicule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projet/vehicule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vehicule_t {
    QByteArrayData data[18];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vehicule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vehicule_t qt_meta_stringdata_vehicule = {
    {
QT_MOC_LITERAL(0, 0, 8), // "vehicule"
QT_MOC_LITERAL(1, 9, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "on_modifier_clicked"
QT_MOC_LITERAL(4, 55, 20), // "on_supprimer_clicked"
QT_MOC_LITERAL(5, 76, 22), // "on_tableView_activated"
QT_MOC_LITERAL(6, 99, 5), // "index"
QT_MOC_LITERAL(7, 105, 18), // "on_ajouter_clicked"
QT_MOC_LITERAL(8, 124, 20), // "on_ajouter_2_clicked"
QT_MOC_LITERAL(9, 145, 20), // "on_ajouter_3_clicked"
QT_MOC_LITERAL(10, 166, 23), // "on_recherche_textEdited"
QT_MOC_LITERAL(11, 190, 4), // "arg1"
QT_MOC_LITERAL(12, 195, 20), // "on_ajouter_4_clicked"
QT_MOC_LITERAL(13, 216, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(14, 240, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(15, 262, 20), // "on_ajouter_5_clicked"
QT_MOC_LITERAL(16, 283, 20), // "on_ajouter_6_clicked"
QT_MOC_LITERAL(17, 304, 20) // "on_ajouter_7_clicked"

    },
    "vehicule\0on_pushButton_13_clicked\0\0"
    "on_modifier_clicked\0on_supprimer_clicked\0"
    "on_tableView_activated\0index\0"
    "on_ajouter_clicked\0on_ajouter_2_clicked\0"
    "on_ajouter_3_clicked\0on_recherche_textEdited\0"
    "arg1\0on_ajouter_4_clicked\0"
    "on_comboBox_2_activated\0on_pushButton_clicked\0"
    "on_ajouter_5_clicked\0on_ajouter_6_clicked\0"
    "on_ajouter_7_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vehicule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    1,   97,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::QImage,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void vehicule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vehicule *_t = static_cast<vehicule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_13_clicked(); break;
        case 1: _t->on_modifier_clicked(); break;
        case 2: _t->on_supprimer_clicked(); break;
        case 3: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_ajouter_clicked(); break;
        case 5: _t->on_ajouter_2_clicked(); break;
        case 6: _t->on_ajouter_3_clicked(); break;
        case 7: _t->on_recherche_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_ajouter_4_clicked(); break;
        case 9: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { QImage _r = _t->on_pushButton_clicked();
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->on_ajouter_5_clicked(); break;
        case 12: _t->on_ajouter_6_clicked(); break;
        case 13: _t->on_ajouter_7_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject vehicule::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_vehicule.data,
      qt_meta_data_vehicule,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *vehicule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vehicule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vehicule.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int vehicule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
