/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Jun 22 19:12:07 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      74,   68,   11,   11, 0x08,
     101,   93,   11,   11, 0x08,
     118,   11,   11,   11, 0x08,
     158,  150,   11,   11, 0x08,
     200,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     222,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0LaunchSearch()\0LaunchUpload()\0"
    "ChangeText()\0EditAddTab()\0Index\0"
    "EditRemoveTab(int)\0runMode\0SwitchMode(bool)\0"
    "EditAddWidget(QListWidgetItem*)\0Control\0"
    "ChangePropertyBrowser(ArgumentInterface*)\0"
    "FileSave()\0FileOpen()\0RunCommand()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: LaunchSearch(); break;
        case 1: LaunchUpload(); break;
        case 2: ChangeText(); break;
        case 3: EditAddTab(); break;
        case 4: EditRemoveTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: SwitchMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: EditAddWidget((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: ChangePropertyBrowser((*reinterpret_cast< ArgumentInterface*(*)>(_a[1]))); break;
        case 8: FileSave(); break;
        case 9: FileOpen(); break;
        case 10: RunCommand(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
