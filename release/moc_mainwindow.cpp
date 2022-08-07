/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../koha-offline-circulation/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[46];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 7), // "newFile"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 9), // "closeFile"
QT_MOC_LITERAL(30, 8), // "loadFile"
QT_MOC_LITERAL(39, 8), // "saveFile"
QT_MOC_LITERAL(48, 10), // "saveFileAs"
QT_MOC_LITERAL(59, 21), // "selectBorrowersDbFile"
QT_MOC_LITERAL(81, 24), // "selectDefaultKocSavePath"
QT_MOC_LITERAL(106, 5), // "about"
QT_MOC_LITERAL(112, 22), // "issuesAcceptCardnumber"
QT_MOC_LITERAL(135, 13), // "issuesAddItem"
QT_MOC_LITERAL(149, 23), // "issuesDeleteItemBarcode"
QT_MOC_LITERAL(173, 12), // "commitIssues"
QT_MOC_LITERAL(186, 12), // "cancelIssues"
QT_MOC_LITERAL(199, 13), // "issuesPayFine"
QT_MOC_LITERAL(213, 21), // "issuesSearchBorrowers"
QT_MOC_LITERAL(235, 11), // "useBorrower"
QT_MOC_LITERAL(247, 14), // "returnsAddItem"
QT_MOC_LITERAL(262, 24), // "returnsDeleteItemBarcode"
QT_MOC_LITERAL(287, 13), // "commitReturns"
QT_MOC_LITERAL(301, 13), // "cancelReturns"
QT_MOC_LITERAL(315, 16) // "historyDeleteRow"

    },
    "MainWindow\0newFile\0\0closeFile\0loadFile\0"
    "saveFile\0saveFileAs\0selectBorrowersDbFile\0"
    "selectDefaultKocSavePath\0about\0"
    "issuesAcceptCardnumber\0issuesAddItem\0"
    "issuesDeleteItemBarcode\0commitIssues\0"
    "cancelIssues\0issuesPayFine\0"
    "issuesSearchBorrowers\0useBorrower\0"
    "returnsAddItem\0returnsDeleteItemBarcode\0"
    "commitReturns\0cancelReturns\0"
    "historyDeleteRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x09,    1 /* Protected */,
       3,    0,  141,    2, 0x09,    2 /* Protected */,
       4,    0,  142,    2, 0x09,    3 /* Protected */,
       5,    0,  143,    2, 0x09,    4 /* Protected */,
       6,    0,  144,    2, 0x09,    5 /* Protected */,
       7,    0,  145,    2, 0x09,    6 /* Protected */,
       8,    0,  146,    2, 0x09,    7 /* Protected */,
       9,    0,  147,    2, 0x09,    8 /* Protected */,
      10,    0,  148,    2, 0x09,    9 /* Protected */,
      11,    0,  149,    2, 0x09,   10 /* Protected */,
      12,    0,  150,    2, 0x09,   11 /* Protected */,
      13,    0,  151,    2, 0x09,   12 /* Protected */,
      14,    0,  152,    2, 0x09,   13 /* Protected */,
      15,    0,  153,    2, 0x09,   14 /* Protected */,
      16,    0,  154,    2, 0x09,   15 /* Protected */,
      17,    1,  155,    2, 0x09,   16 /* Protected */,
      18,    0,  158,    2, 0x09,   18 /* Protected */,
      19,    0,  159,    2, 0x09,   19 /* Protected */,
      20,    0,  160,    2, 0x09,   20 /* Protected */,
      21,    0,  161,    2, 0x09,   21 /* Protected */,
      22,    0,  162,    2, 0x09,   22 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
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
        case 0: _t->newFile(); break;
        case 1: _t->closeFile(); break;
        case 2: _t->loadFile(); break;
        case 3: _t->saveFile(); break;
        case 4: _t->saveFileAs(); break;
        case 5: _t->selectBorrowersDbFile(); break;
        case 6: _t->selectDefaultKocSavePath(); break;
        case 7: _t->about(); break;
        case 8: _t->issuesAcceptCardnumber(); break;
        case 9: _t->issuesAddItem(); break;
        case 10: _t->issuesDeleteItemBarcode(); break;
        case 11: _t->commitIssues(); break;
        case 12: _t->cancelIssues(); break;
        case 13: _t->issuesPayFine(); break;
        case 14: _t->issuesSearchBorrowers(); break;
        case 15: _t->useBorrower((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->returnsAddItem(); break;
        case 17: _t->returnsDeleteItemBarcode(); break;
        case 18: _t->commitReturns(); break;
        case 19: _t->cancelReturns(); break;
        case 20: _t->historyDeleteRow(); break;
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
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
