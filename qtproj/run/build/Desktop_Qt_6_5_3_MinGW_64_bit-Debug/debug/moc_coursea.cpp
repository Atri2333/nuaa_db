/****************************************************************************
** Meta object code from reading C++ file 'coursea.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../coursea.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coursea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASScourseAENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASScourseAENDCLASS = QtMocHelpers::stringData(
    "courseA",
    "on_radioButton_pressed",
    "",
    "on_radioButton_released",
    "on_radioButton_toggled",
    "checked",
    "on_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScourseAENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[8];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[23];
    char stringdata5[8];
    char stringdata6[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScourseAENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScourseAENDCLASS_t qt_meta_stringdata_CLASScourseAENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "courseA"
        QT_MOC_LITERAL(8, 22),  // "on_radioButton_pressed"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 23),  // "on_radioButton_released"
        QT_MOC_LITERAL(56, 22),  // "on_radioButton_toggled"
        QT_MOC_LITERAL(79, 7),  // "checked"
        QT_MOC_LITERAL(87, 21)   // "on_pushButton_clicked"
    },
    "courseA",
    "on_radioButton_pressed",
    "",
    "on_radioButton_released",
    "on_radioButton_toggled",
    "checked",
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScourseAENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    1,   40,    2, 0x08,    3 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject courseA::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASScourseAENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScourseAENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScourseAENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<courseA, std::true_type>,
        // method 'on_radioButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void courseA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<courseA *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_radioButton_pressed(); break;
        case 1: _t->on_radioButton_released(); break;
        case 2: _t->on_radioButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *courseA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *courseA::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScourseAENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int courseA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
