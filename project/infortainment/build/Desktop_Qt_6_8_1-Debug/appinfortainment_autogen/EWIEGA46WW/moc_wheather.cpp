/****************************************************************************
** Meta object code from reading C++ file 'wheather.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../wheather.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wheather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
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
struct qt_meta_tag_ZN8wheatherE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8wheatherE = QtMocHelpers::stringData(
    "wheather",
    "LocationChanged",
    "",
    "TemperatureChanged",
    "FeelslikeChanged",
    "ConditionChanged",
    "IconChanged",
    "fetch",
    "Location",
    "Temperature",
    "Feelslike",
    "Condition",
    "Icon"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8wheatherE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    6 /* Public */,
       3,    0,   51,    2, 0x06,    7 /* Public */,
       4,    0,   52,    2, 0x06,    8 /* Public */,
       5,    0,   53,    2, 0x06,    9 /* Public */,
       6,    0,   54,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   55,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       8, QMetaType::QString, 0x00015903, uint(0), 0,
       9, QMetaType::QString, 0x00015903, uint(1), 0,
      10, QMetaType::QString, 0x00015903, uint(2), 0,
      11, QMetaType::QString, 0x00015903, uint(3), 0,
      12, QMetaType::QString, 0x00015903, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject wheather::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8wheatherE.offsetsAndSizes,
    qt_meta_data_ZN8wheatherE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8wheatherE_t,
        // property 'Location'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'Temperature'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'Feelslike'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'Condition'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'Icon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<wheather, std::true_type>,
        // method 'LocationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TemperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FeelslikeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ConditionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'IconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void wheather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<wheather *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->LocationChanged(); break;
        case 1: _t->TemperatureChanged(); break;
        case 2: _t->FeelslikeChanged(); break;
        case 3: _t->ConditionChanged(); break;
        case 4: _t->IconChanged(); break;
        case 5: _t->fetch(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (wheather::*)();
            if (_q_method_type _q_method = &wheather::LocationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (wheather::*)();
            if (_q_method_type _q_method = &wheather::TemperatureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (wheather::*)();
            if (_q_method_type _q_method = &wheather::FeelslikeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (wheather::*)();
            if (_q_method_type _q_method = &wheather::ConditionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (wheather::*)();
            if (_q_method_type _q_method = &wheather::IconChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->Location(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->Temperature(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->Feelslike(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->Condition(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->Icon(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocation(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTemperature(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFeelslike(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCondition(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setIcon(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *wheather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wheather::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8wheatherE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int wheather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void wheather::LocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void wheather::TemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void wheather::FeelslikeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void wheather::ConditionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void wheather::IconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
