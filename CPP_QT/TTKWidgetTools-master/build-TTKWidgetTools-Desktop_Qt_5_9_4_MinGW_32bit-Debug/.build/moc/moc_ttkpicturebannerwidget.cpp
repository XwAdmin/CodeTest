/****************************************************************************
** Meta object code from reading C++ file 'ttkpicturebannerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Src/Widget/pictureBannerWidget/ttkpicturebannerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttkpicturebannerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TTKPictureBannerArrowWidget_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKPictureBannerArrowWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKPictureBannerArrowWidget_t qt_meta_stringdata_TTKPictureBannerArrowWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "TTKPictureBannerArrowWidget"
QT_MOC_LITERAL(1, 28, 7), // "clicked"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "TTKPictureBannerArrowWidget\0clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKPictureBannerArrowWidget[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void TTKPictureBannerArrowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKPictureBannerArrowWidget *_t = static_cast<TTKPictureBannerArrowWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKPictureBannerArrowWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKPictureBannerArrowWidget::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TTKPictureBannerArrowWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKPictureBannerArrowWidget.data,
      qt_meta_data_TTKPictureBannerArrowWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKPictureBannerArrowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKPictureBannerArrowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKPictureBannerArrowWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKPictureBannerArrowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TTKPictureBannerArrowWidget::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TTKPictureBannerIndicator_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKPictureBannerIndicator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKPictureBannerIndicator_t qt_meta_stringdata_TTKPictureBannerIndicator = {
    {
QT_MOC_LITERAL(0, 0, 25), // "TTKPictureBannerIndicator"
QT_MOC_LITERAL(1, 26, 7), // "entered"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "TTKPictureBannerIndicator\0entered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKPictureBannerIndicator[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void TTKPictureBannerIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKPictureBannerIndicator *_t = static_cast<TTKPictureBannerIndicator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKPictureBannerIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKPictureBannerIndicator::entered)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TTKPictureBannerIndicator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKPictureBannerIndicator.data,
      qt_meta_data_TTKPictureBannerIndicator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKPictureBannerIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKPictureBannerIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKPictureBannerIndicator.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKPictureBannerIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TTKPictureBannerIndicator::entered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TTKPictureBannerPage_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKPictureBannerPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKPictureBannerPage_t qt_meta_stringdata_TTKPictureBannerPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TTKPictureBannerPage"
QT_MOC_LITERAL(1, 21, 7), // "clicked"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "TTKPictureBannerPage\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKPictureBannerPage[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void TTKPictureBannerPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKPictureBannerPage *_t = static_cast<TTKPictureBannerPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKPictureBannerPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKPictureBannerPage::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TTKPictureBannerPage::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TTKPictureBannerPage.data,
      qt_meta_data_TTKPictureBannerPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKPictureBannerPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKPictureBannerPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKPictureBannerPage.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int TTKPictureBannerPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void TTKPictureBannerPage::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TTKPictureBannerView_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKPictureBannerView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKPictureBannerView_t qt_meta_stringdata_TTKPictureBannerView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TTKPictureBannerView"
QT_MOC_LITERAL(1, 21, 7), // "clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "flag"
QT_MOC_LITERAL(4, 35, 15), // "slotPageClicked"
QT_MOC_LITERAL(5, 51, 16) // "slotArrowClicked"

    },
    "TTKPictureBannerView\0clicked\0\0flag\0"
    "slotPageClicked\0slotArrowClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKPictureBannerView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TTKPictureBannerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKPictureBannerView *_t = static_cast<TTKPictureBannerView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotPageClicked(); break;
        case 2: _t->slotArrowClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKPictureBannerView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKPictureBannerView::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TTKPictureBannerView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKPictureBannerView.data,
      qt_meta_data_TTKPictureBannerView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKPictureBannerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKPictureBannerView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKPictureBannerView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKPictureBannerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TTKPictureBannerView::clicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TTKPictureBannerWidget_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKPictureBannerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKPictureBannerWidget_t qt_meta_stringdata_TTKPictureBannerWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TTKPictureBannerWidget"
QT_MOC_LITERAL(1, 23, 14), // "currentClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 15), // "switchIndicator"
QT_MOC_LITERAL(5, 61, 10), // "switchPage"
QT_MOC_LITERAL(6, 72, 4), // "flag"
QT_MOC_LITERAL(7, 77, 11) // "slotTimeOut"

    },
    "TTKPictureBannerWidget\0currentClicked\0"
    "\0index\0switchIndicator\0switchPage\0"
    "flag\0slotTimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKPictureBannerWidget[] = {

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
       4,    0,   37,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void TTKPictureBannerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKPictureBannerWidget *_t = static_cast<TTKPictureBannerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->switchIndicator(); break;
        case 2: _t->switchPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotTimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKPictureBannerWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKPictureBannerWidget::currentClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TTKPictureBannerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKPictureBannerWidget.data,
      qt_meta_data_TTKPictureBannerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKPictureBannerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKPictureBannerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKPictureBannerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKPictureBannerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TTKPictureBannerWidget::currentClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
