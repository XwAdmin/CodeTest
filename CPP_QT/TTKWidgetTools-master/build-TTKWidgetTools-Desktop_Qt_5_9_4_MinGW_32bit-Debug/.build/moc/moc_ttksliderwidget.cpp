/****************************************************************************
** Meta object code from reading C++ file 'ttksliderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Src/Slider/sliderWidget/ttksliderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttksliderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TTKSliderWidget_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKSliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKSliderWidget_t qt_meta_stringdata_TTKSliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TTKSliderWidget"
QT_MOC_LITERAL(1, 16, 14), // "setOrientation"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "Qt::Orientation"
QT_MOC_LITERAL(4, 48, 11) // "orientation"

    },
    "TTKSliderWidget\0setOrientation\0\0"
    "Qt::Orientation\0orientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKSliderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void TTKSliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKSliderWidget *_t = static_cast<TTKSliderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TTKSliderWidget::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_TTKSliderWidget.data,
      qt_meta_data_TTKSliderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKSliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKSliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKSliderWidget.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int TTKSliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
