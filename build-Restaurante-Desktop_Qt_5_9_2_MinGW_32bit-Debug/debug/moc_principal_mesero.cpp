/****************************************************************************
** Meta object code from reading C++ file 'principal_mesero.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Restaurante/Mesero/principal_mesero.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'principal_mesero.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Principal_Mesero_t {
    QByteArrayData data[15];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Principal_Mesero_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Principal_Mesero_t qt_meta_stringdata_Principal_Mesero = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Principal_Mesero"
QT_MOC_LITERAL(1, 17, 18), // "on_parilla_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "on_ensalada_clicked"
QT_MOC_LITERAL(4, 57, 14), // "on_mar_clicked"
QT_MOC_LITERAL(5, 72, 15), // "on_sopa_clicked"
QT_MOC_LITERAL(6, 88, 18), // "on_entrada_clicked"
QT_MOC_LITERAL(7, 107, 21), // "on_guarnicion_clicked"
QT_MOC_LITERAL(8, 129, 21), // "on_reposteria_clicked"
QT_MOC_LITERAL(9, 151, 19), // "on_infantil_clicked"
QT_MOC_LITERAL(10, 171, 18), // "on_comanda_clicked"
QT_MOC_LITERAL(11, 190, 16), // "on_mesas_clicked"
QT_MOC_LITERAL(12, 207, 18), // "on_bebidas_clicked"
QT_MOC_LITERAL(13, 226, 17), // "on_coctel_clicked"
QT_MOC_LITERAL(14, 244, 15) // "on_vino_clicked"

    },
    "Principal_Mesero\0on_parilla_clicked\0"
    "\0on_ensalada_clicked\0on_mar_clicked\0"
    "on_sopa_clicked\0on_entrada_clicked\0"
    "on_guarnicion_clicked\0on_reposteria_clicked\0"
    "on_infantil_clicked\0on_comanda_clicked\0"
    "on_mesas_clicked\0on_bebidas_clicked\0"
    "on_coctel_clicked\0on_vino_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Principal_Mesero[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Principal_Mesero::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Principal_Mesero *_t = static_cast<Principal_Mesero *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_parilla_clicked(); break;
        case 1: _t->on_ensalada_clicked(); break;
        case 2: _t->on_mar_clicked(); break;
        case 3: _t->on_sopa_clicked(); break;
        case 4: _t->on_entrada_clicked(); break;
        case 5: _t->on_guarnicion_clicked(); break;
        case 6: _t->on_reposteria_clicked(); break;
        case 7: _t->on_infantil_clicked(); break;
        case 8: _t->on_comanda_clicked(); break;
        case 9: _t->on_mesas_clicked(); break;
        case 10: _t->on_bebidas_clicked(); break;
        case 11: _t->on_coctel_clicked(); break;
        case 12: _t->on_vino_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Principal_Mesero::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Principal_Mesero.data,
      qt_meta_data_Principal_Mesero,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Principal_Mesero::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Principal_Mesero::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Principal_Mesero.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Principal_Mesero::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
