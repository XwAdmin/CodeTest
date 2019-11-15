/****************************************************************************
** Meta object code from reading C++ file 'ttkfunctionanimationwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Src/Title/functionAnimationHWidget/ttkfunctionanimationwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttkfunctionanimationwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TTKBaseAnimationWidget_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKBaseAnimationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKBaseAnimationWidget_t qt_meta_stringdata_TTKBaseAnimationWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TTKBaseAnimationWidget"
QT_MOC_LITERAL(1, 23, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 25), // "switchToSelectedItemStyle"
QT_MOC_LITERAL(5, 70, 16), // "animationChanged"
QT_MOC_LITERAL(6, 87, 5), // "value"
QT_MOC_LITERAL(7, 93, 8) // "finished"

    },
    "TTKBaseAnimationWidget\0buttonClicked\0"
    "\0index\0switchToSelectedItemStyle\0"
    "animationChanged\0value\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKBaseAnimationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x0a /* Public */,
       7,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void,

       0        // eod
};

void TTKBaseAnimationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKBaseAnimationWidget *_t = static_cast<TTKBaseAnimationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->switchToSelectedItemStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->animationChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKBaseAnimationWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKBaseAnimationWidget::buttonClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TTKBaseAnimationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKBaseAnimationWidget.data,
      qt_meta_data_TTKBaseAnimationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKBaseAnimationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKBaseAnimationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKBaseAnimationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKBaseAnimationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TTKBaseAnimationWidget::buttonClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TTKBaseAnimationHWidget_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKBaseAnimationHWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKBaseAnimationHWidget_t qt_meta_stringdata_TTKBaseAnimationHWidget = {
    {
QT_MOC_LITERAL(0, 0, 23) // "TTKBaseAnimationHWidget"

    },
    "TTKBaseAnimationHWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKBaseAnimationHWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKBaseAnimationHWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKBaseAnimationHWidget::staticMetaObject = {
    { &TTKBaseAnimationWidget::staticMetaObject, qt_meta_stringdata_TTKBaseAnimationHWidget.data,
      qt_meta_data_TTKBaseAnimationHWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKBaseAnimationHWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKBaseAnimationHWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKBaseAnimationHWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationWidget::qt_metacast(_clname);
}

int TTKBaseAnimationHWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TTKOptionAnimationHWidget_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKOptionAnimationHWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKOptionAnimationHWidget_t qt_meta_stringdata_TTKOptionAnimationHWidget = {
    {
QT_MOC_LITERAL(0, 0, 25) // "TTKOptionAnimationHWidget"

    },
    "TTKOptionAnimationHWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKOptionAnimationHWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKOptionAnimationHWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKOptionAnimationHWidget::staticMetaObject = {
    { &TTKBaseAnimationHWidget::staticMetaObject, qt_meta_stringdata_TTKOptionAnimationHWidget.data,
      qt_meta_data_TTKOptionAnimationHWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKOptionAnimationHWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKOptionAnimationHWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKOptionAnimationHWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationHWidget::qt_metacast(_clname);
}

int TTKOptionAnimationHWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationHWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TTKTableAnimationHWidget_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKTableAnimationHWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKTableAnimationHWidget_t qt_meta_stringdata_TTKTableAnimationHWidget = {
    {
QT_MOC_LITERAL(0, 0, 24) // "TTKTableAnimationHWidget"

    },
    "TTKTableAnimationHWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKTableAnimationHWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKTableAnimationHWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKTableAnimationHWidget::staticMetaObject = {
    { &TTKBaseAnimationHWidget::staticMetaObject, qt_meta_stringdata_TTKTableAnimationHWidget.data,
      qt_meta_data_TTKTableAnimationHWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKTableAnimationHWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKTableAnimationHWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKTableAnimationHWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationHWidget::qt_metacast(_clname);
}

int TTKTableAnimationHWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationHWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TTKSkinAnimationHWidget_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKSkinAnimationHWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKSkinAnimationHWidget_t qt_meta_stringdata_TTKSkinAnimationHWidget = {
    {
QT_MOC_LITERAL(0, 0, 23) // "TTKSkinAnimationHWidget"

    },
    "TTKSkinAnimationHWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKSkinAnimationHWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKSkinAnimationHWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKSkinAnimationHWidget::staticMetaObject = {
    { &TTKBaseAnimationHWidget::staticMetaObject, qt_meta_stringdata_TTKSkinAnimationHWidget.data,
      qt_meta_data_TTKSkinAnimationHWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKSkinAnimationHWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKSkinAnimationHWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKSkinAnimationHWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationHWidget::qt_metacast(_clname);
}

int TTKSkinAnimationHWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationHWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TTKBaseAnimationVWidget_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKBaseAnimationVWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKBaseAnimationVWidget_t qt_meta_stringdata_TTKBaseAnimationVWidget = {
    {
QT_MOC_LITERAL(0, 0, 23) // "TTKBaseAnimationVWidget"

    },
    "TTKBaseAnimationVWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKBaseAnimationVWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKBaseAnimationVWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKBaseAnimationVWidget::staticMetaObject = {
    { &TTKBaseAnimationWidget::staticMetaObject, qt_meta_stringdata_TTKBaseAnimationVWidget.data,
      qt_meta_data_TTKBaseAnimationVWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKBaseAnimationVWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKBaseAnimationVWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKBaseAnimationVWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationWidget::qt_metacast(_clname);
}

int TTKBaseAnimationVWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TTKOptionAnimationVWidget_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKOptionAnimationVWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKOptionAnimationVWidget_t qt_meta_stringdata_TTKOptionAnimationVWidget = {
    {
QT_MOC_LITERAL(0, 0, 25) // "TTKOptionAnimationVWidget"

    },
    "TTKOptionAnimationVWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKOptionAnimationVWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKOptionAnimationVWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKOptionAnimationVWidget::staticMetaObject = {
    { &TTKBaseAnimationVWidget::staticMetaObject, qt_meta_stringdata_TTKOptionAnimationVWidget.data,
      qt_meta_data_TTKOptionAnimationVWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKOptionAnimationVWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKOptionAnimationVWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKOptionAnimationVWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationVWidget::qt_metacast(_clname);
}

int TTKOptionAnimationVWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationVWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TTKTableAnimationVWidget_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKTableAnimationVWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKTableAnimationVWidget_t qt_meta_stringdata_TTKTableAnimationVWidget = {
    {
QT_MOC_LITERAL(0, 0, 24) // "TTKTableAnimationVWidget"

    },
    "TTKTableAnimationVWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKTableAnimationVWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKTableAnimationVWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKTableAnimationVWidget::staticMetaObject = {
    { &TTKBaseAnimationVWidget::staticMetaObject, qt_meta_stringdata_TTKTableAnimationVWidget.data,
      qt_meta_data_TTKTableAnimationVWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKTableAnimationVWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKTableAnimationVWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKTableAnimationVWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationVWidget::qt_metacast(_clname);
}

int TTKTableAnimationVWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationVWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TTKSkinAnimationVWidget_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKSkinAnimationVWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKSkinAnimationVWidget_t qt_meta_stringdata_TTKSkinAnimationVWidget = {
    {
QT_MOC_LITERAL(0, 0, 23) // "TTKSkinAnimationVWidget"

    },
    "TTKSkinAnimationVWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKSkinAnimationVWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TTKSkinAnimationVWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TTKSkinAnimationVWidget::staticMetaObject = {
    { &TTKBaseAnimationVWidget::staticMetaObject, qt_meta_stringdata_TTKSkinAnimationVWidget.data,
      qt_meta_data_TTKSkinAnimationVWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKSkinAnimationVWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKSkinAnimationVWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKSkinAnimationVWidget.stringdata0))
        return static_cast<void*>(this);
    return TTKBaseAnimationVWidget::qt_metacast(_clname);
}

int TTKSkinAnimationVWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TTKBaseAnimationVWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
