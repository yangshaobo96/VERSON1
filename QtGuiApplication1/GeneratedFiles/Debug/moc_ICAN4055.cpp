/****************************************************************************
** Meta object code from reading C++ file 'ICAN4055.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ICAN4055.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ICAN4055.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ICAN4055_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ICAN4055_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ICAN4055_t qt_meta_stringdata_ICAN4055 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ICAN4055"
QT_MOC_LITERAL(1, 9, 13), // "btn_Start_CAN"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "btn_Change"
QT_MOC_LITERAL(4, 35, 12), // "btn_Link_CAN"
QT_MOC_LITERAL(5, 48, 11), // "react_Timer"
QT_MOC_LITERAL(6, 60, 16) // "react_TextChange"

    },
    "ICAN4055\0btn_Start_CAN\0\0btn_Change\0"
    "btn_Link_CAN\0react_Timer\0react_TextChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ICAN4055[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ICAN4055::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ICAN4055 *_t = static_cast<ICAN4055 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btn_Start_CAN(); break;
        case 1: _t->btn_Change(); break;
        case 2: _t->btn_Link_CAN(); break;
        case 3: _t->react_Timer(); break;
        case 4: _t->react_TextChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ICAN4055::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ICAN4055.data,
      qt_meta_data_ICAN4055,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ICAN4055::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ICAN4055::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ICAN4055.stringdata0))
        return static_cast<void*>(const_cast< ICAN4055*>(this));
    return QDialog::qt_metacast(_clname);
}

int ICAN4055::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
