/****************************************************************************
** Meta object code from reading C++ file 'ttkfunctiontoolboxwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Src/Title/functionToolboxWidget/ttkfunctiontoolboxwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttkfunctiontoolboxwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TTKFunctionToolBoxTopWidget_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKFunctionToolBoxTopWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKFunctionToolBoxTopWidget_t qt_meta_stringdata_TTKFunctionToolBoxTopWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "TTKFunctionToolBoxTopWidget"
QT_MOC_LITERAL(1, 28, 12), // "mousePressAt"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "index"
QT_MOC_LITERAL(4, 48, 17), // "swapDragItemIndex"
QT_MOC_LITERAL(5, 66, 6), // "before"
QT_MOC_LITERAL(6, 73, 5) // "after"

    },
    "TTKFunctionToolBoxTopWidget\0mousePressAt\0"
    "\0index\0swapDragItemIndex\0before\0after"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKFunctionToolBoxTopWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

       0        // eod
};

void TTKFunctionToolBoxTopWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKFunctionToolBoxTopWidget *_t = static_cast<TTKFunctionToolBoxTopWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->swapDragItemIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKFunctionToolBoxTopWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKFunctionToolBoxTopWidget::mousePressAt)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TTKFunctionToolBoxTopWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKFunctionToolBoxTopWidget::swapDragItemIndex)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TTKFunctionToolBoxTopWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKFunctionToolBoxTopWidget.data,
      qt_meta_data_TTKFunctionToolBoxTopWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKFunctionToolBoxTopWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKFunctionToolBoxTopWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKFunctionToolBoxTopWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKFunctionToolBoxTopWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TTKFunctionToolBoxTopWidget::mousePressAt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TTKFunctionToolBoxTopWidget::swapDragItemIndex(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_TTKFunctionToolBoxWidgetItem_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKFunctionToolBoxWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKFunctionToolBoxWidgetItem_t qt_meta_stringdata_TTKFunctionToolBoxWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 28), // "TTKFunctionToolBoxWidgetItem"
QT_MOC_LITERAL(1, 29, 17), // "swapDragItemIndex"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "before"
QT_MOC_LITERAL(4, 55, 5) // "after"

    },
    "TTKFunctionToolBoxWidgetItem\0"
    "swapDragItemIndex\0\0before\0after"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKFunctionToolBoxWidgetItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void TTKFunctionToolBoxWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKFunctionToolBoxWidgetItem *_t = static_cast<TTKFunctionToolBoxWidgetItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->swapDragItemIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKFunctionToolBoxWidgetItem::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKFunctionToolBoxWidgetItem::swapDragItemIndex)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TTKFunctionToolBoxWidgetItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKFunctionToolBoxWidgetItem.data,
      qt_meta_data_TTKFunctionToolBoxWidgetItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKFunctionToolBoxWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKFunctionToolBoxWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKFunctionToolBoxWidgetItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKFunctionToolBoxWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TTKFunctionToolBoxWidgetItem::swapDragItemIndex(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TTKFunctionToolBoxWidget_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKFunctionToolBoxWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKFunctionToolBoxWidget_t qt_meta_stringdata_TTKFunctionToolBoxWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TTKFunctionToolBoxWidget"
QT_MOC_LITERAL(1, 25, 15), // "setCurrentIndex"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "index"
QT_MOC_LITERAL(4, 48, 12), // "mousePressAt"
QT_MOC_LITERAL(5, 61, 14), // "setTransparent"
QT_MOC_LITERAL(6, 76, 5) // "alpha"

    },
    "TTKFunctionToolBoxWidget\0setCurrentIndex\0"
    "\0index\0mousePressAt\0setTransparent\0"
    "alpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKFunctionToolBoxWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void TTKFunctionToolBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKFunctionToolBoxWidget *_t = static_cast<TTKFunctionToolBoxWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mousePressAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setTransparent((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TTKFunctionToolBoxWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKFunctionToolBoxWidget.data,
      qt_meta_data_TTKFunctionToolBoxWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKFunctionToolBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKFunctionToolBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKFunctionToolBoxWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKFunctionToolBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
