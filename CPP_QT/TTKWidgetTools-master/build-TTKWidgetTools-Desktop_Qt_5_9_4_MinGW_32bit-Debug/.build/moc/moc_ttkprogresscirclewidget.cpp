/****************************************************************************
** Meta object code from reading C++ file 'ttkprogresscirclewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Src/Progress/progressCircleWidget/ttkprogresscirclewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttkprogresscirclewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TTKProgressCircleWidget_t {
    QByteArrayData data[18];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKProgressCircleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKProgressCircleWidget_t qt_meta_stringdata_TTKProgressCircleWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "TTKProgressCircleWidget"
QT_MOC_LITERAL(1, 24, 12), // "valueChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "maximumChanged"
QT_MOC_LITERAL(4, 53, 8), // "setValue"
QT_MOC_LITERAL(5, 62, 5), // "value"
QT_MOC_LITERAL(6, 68, 10), // "setMaximum"
QT_MOC_LITERAL(7, 79, 7), // "maximum"
QT_MOC_LITERAL(8, 87, 14), // "setInnerRadius"
QT_MOC_LITERAL(9, 102, 11), // "innerRadius"
QT_MOC_LITERAL(10, 114, 14), // "setOuterRadius"
QT_MOC_LITERAL(11, 129, 11), // "outerRadius"
QT_MOC_LITERAL(12, 141, 8), // "setColor"
QT_MOC_LITERAL(13, 150, 5), // "color"
QT_MOC_LITERAL(14, 156, 25), // "setInfiniteAnimationValue"
QT_MOC_LITERAL(15, 182, 15), // "setVisibleValue"
QT_MOC_LITERAL(16, 198, 22), // "infiniteAnimationValue"
QT_MOC_LITERAL(17, 221, 12) // "visibleValue"

    },
    "TTKProgressCircleWidget\0valueChanged\0"
    "\0maximumChanged\0setValue\0value\0"
    "setMaximum\0maximum\0setInnerRadius\0"
    "innerRadius\0setOuterRadius\0outerRadius\0"
    "setColor\0color\0setInfiniteAnimationValue\0"
    "setVisibleValue\0infiniteAnimationValue\0"
    "visibleValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKProgressCircleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   65,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      12,    1,   77,    2, 0x0a /* Public */,
      14,    1,   80,    2, 0x08 /* Private */,
      15,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QColor,   13,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495103,
       9, QMetaType::QReal, 0x00095103,
      11, QMetaType::QReal, 0x00095103,
      13, QMetaType::QColor, 0x00095103,
      16, QMetaType::QReal, 0x00095103,
      17, QMetaType::Int, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void TTKProgressCircleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKProgressCircleWidget *_t = static_cast<TTKProgressCircleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->maximumChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setInnerRadius((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setOuterRadius((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->setInfiniteAnimationValue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setVisibleValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKProgressCircleWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKProgressCircleWidget::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TTKProgressCircleWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKProgressCircleWidget::maximumChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TTKProgressCircleWidget *_t = static_cast<TTKProgressCircleWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->innerRadius(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->outerRadius(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->infiniteAnimationValue(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->visibleValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TTKProgressCircleWidget *_t = static_cast<TTKProgressCircleWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setInnerRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setOuterRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setInfiniteAnimationValue(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setVisibleValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TTKProgressCircleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKProgressCircleWidget.data,
      qt_meta_data_TTKProgressCircleWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKProgressCircleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKProgressCircleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKProgressCircleWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKProgressCircleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TTKProgressCircleWidget::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TTKProgressCircleWidget::maximumChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
