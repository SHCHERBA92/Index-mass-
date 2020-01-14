/****************************************************************************
** Meta object code from reading C++ file 'interface_1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../index_mass_tela/interface_1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface_1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_My_Widow_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_My_Widow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_My_Widow_t qt_meta_stringdata_My_Widow = {
    {
QT_MOC_LITERAL(0, 0, 8), // "My_Widow"
QT_MOC_LITERAL(1, 9, 19), // "Click_Check_Box_MEN"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "Click_Check_Box_WOMEN"
QT_MOC_LITERAL(4, 52, 23) // "Click_My_Button_Raschet"

    },
    "My_Widow\0Click_Check_Box_MEN\0\0"
    "Click_Check_Box_WOMEN\0Click_My_Button_Raschet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_My_Widow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void My_Widow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<My_Widow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Click_Check_Box_MEN(); break;
        case 1: _t->Click_Check_Box_WOMEN(); break;
        case 2: _t->Click_My_Button_Raschet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (My_Widow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&My_Widow::Click_Check_Box_MEN)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (My_Widow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&My_Widow::Click_Check_Box_WOMEN)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject My_Widow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_My_Widow.data,
    qt_meta_data_My_Widow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *My_Widow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *My_Widow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_My_Widow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int My_Widow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void My_Widow::Click_Check_Box_MEN()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void My_Widow::Click_Check_Box_WOMEN()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
