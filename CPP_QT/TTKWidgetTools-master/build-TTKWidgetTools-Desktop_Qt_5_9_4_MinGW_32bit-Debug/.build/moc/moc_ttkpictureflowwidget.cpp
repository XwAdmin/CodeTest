/****************************************************************************
** Meta object code from reading C++ file 'ttkpictureflowwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Src/Widget/pictureFlowWidget/ttkpictureflowwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttkpictureflowwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TTKPictureFlowWidget_t {
    QByteArrayData data[19];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTKPictureFlowWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTKPictureFlowWidget_t qt_meta_stringdata_TTKPictureFlowWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TTKPictureFlowWidget"
QT_MOC_LITERAL(1, 21, 18), // "centerIndexChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 8), // "addSlide"
QT_MOC_LITERAL(5, 56, 5), // "image"
QT_MOC_LITERAL(6, 62, 8), // "setSlide"
QT_MOC_LITERAL(7, 71, 14), // "setCenterIndex"
QT_MOC_LITERAL(8, 86, 5), // "clear"
QT_MOC_LITERAL(9, 92, 12), // "showPrevious"
QT_MOC_LITERAL(10, 105, 8), // "showNext"
QT_MOC_LITERAL(11, 114, 9), // "showSlide"
QT_MOC_LITERAL(12, 124, 6), // "render"
QT_MOC_LITERAL(13, 131, 13), // "triggerRender"
QT_MOC_LITERAL(14, 145, 15), // "updateAnimation"
QT_MOC_LITERAL(15, 161, 15), // "backgroundColor"
QT_MOC_LITERAL(16, 177, 9), // "slideSize"
QT_MOC_LITERAL(17, 187, 10), // "slideCount"
QT_MOC_LITERAL(18, 198, 11) // "centerIndex"

    },
    "TTKPictureFlowWidget\0centerIndexChanged\0"
    "\0index\0addSlide\0image\0setSlide\0"
    "setCenterIndex\0clear\0showPrevious\0"
    "showNext\0showSlide\0render\0triggerRender\0"
    "updateAnimation\0backgroundColor\0"
    "slideSize\0slideCount\0centerIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTKPictureFlowWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   72,    2, 0x0a /* Public */,
       6,    2,   75,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       8,    0,   83,    2, 0x0a /* Public */,
       9,    0,   84,    2, 0x0a /* Public */,
      10,    0,   85,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    3,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QColor, 0x00095103,
      16, QMetaType::QSize, 0x00095103,
      17, QMetaType::Int, 0x00095001,
      18, QMetaType::Int, 0x00095103,

       0        // eod
};

void TTKPictureFlowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTKPictureFlowWidget *_t = static_cast<TTKPictureFlowWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addSlide((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->setSlide((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->setCenterIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->showPrevious(); break;
        case 6: _t->showNext(); break;
        case 7: _t->showSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->render(); break;
        case 9: _t->triggerRender(); break;
        case 10: _t->updateAnimation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TTKPictureFlowWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TTKPictureFlowWidget::centerIndexChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TTKPictureFlowWidget *_t = static_cast<TTKPictureFlowWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->slideSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->slideCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->centerIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TTKPictureFlowWidget *_t = static_cast<TTKPictureFlowWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSlideSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: _t->setCenterIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TTKPictureFlowWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTKPictureFlowWidget.data,
      qt_meta_data_TTKPictureFlowWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TTKPictureFlowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTKPictureFlowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TTKPictureFlowWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TTKPictureFlowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TTKPictureFlowWidget::centerIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
