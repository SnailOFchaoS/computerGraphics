/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab_01/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 17), // "setRectanglePoint"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 4), // "text"
QT_MOC_LITERAL(35, 8), // "setPoint"
QT_MOC_LITERAL(44, 11), // "handleError"
QT_MOC_LITERAL(56, 5), // "error"
QT_MOC_LITERAL(62, 17), // "makeTextForOutput"
QT_MOC_LITERAL(80, 20), // "deleteRectanglePoint"
QT_MOC_LITERAL(101, 11), // "deletePoint"
QT_MOC_LITERAL(113, 11), // "isRectangle"
QT_MOC_LITERAL(125, 24), // "calculateRectangleMiddle"
QT_MOC_LITERAL(150, 12), // "findTriangle"
QT_MOC_LITERAL(163, 25), // "on_addPointButton_clicked"
QT_MOC_LITERAL(189, 28), // "on_deletePointButton_clicked"
QT_MOC_LITERAL(218, 21) // "on_drawButton_clicked"

    },
    "MainWindow\0setRectanglePoint\0\0text\0"
    "setPoint\0handleError\0error\0makeTextForOutput\0"
    "deleteRectanglePoint\0deletePoint\0"
    "isRectangle\0calculateRectangleMiddle\0"
    "findTriangle\0on_addPointButton_clicked\0"
    "on_deletePointButton_clicked\0"
    "on_drawButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    0 /* Private */,
       4,    1,   89,    2, 0x08,    2 /* Private */,
       5,    1,   92,    2, 0x08,    4 /* Private */,
       7,    0,   95,    2, 0x08,    6 /* Private */,
       8,    1,   96,    2, 0x08,    7 /* Private */,
       9,    1,   99,    2, 0x08,    9 /* Private */,
      10,    0,  102,    2, 0x08,   11 /* Private */,
      11,    0,  103,    2, 0x08,   12 /* Private */,
      12,    0,  104,    2, 0x08,   13 /* Private */,
      13,    0,  105,    2, 0x08,   14 /* Private */,
      14,    0,  106,    2, 0x08,   15 /* Private */,
      15,    0,  107,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setRectanglePoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setPoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->handleError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { QString _r = _t->makeTextForOutput();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->deleteRectanglePoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->deletePoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { int _r = _t->isRectangle();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->calculateRectangleMiddle(); break;
        case 8: _t->findTriangle(); break;
        case 9: _t->on_addPointButton_clicked(); break;
        case 10: _t->on_deletePointButton_clicked(); break;
        case 11: _t->on_drawButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
