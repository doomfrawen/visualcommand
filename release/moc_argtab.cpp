/****************************************************************************
** Meta object code from reading C++ file 'argtab.h'
**
** Created: Mon Jun 22 19:12:24 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../argtab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'argtab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_argTab[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      33,   25,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,    7,    7,    7, 0x0a,
      78,    7,    7,    7, 0x0a,
      89,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_argTab[] = {
    "argTab\0\0ControlChanged()\0Control\0"
    "ControlSelected(ArgumentInterface*)\0"
    "MoveUp()\0MoveDown()\0DeleteArgument()\0"
};

const QMetaObject argTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_argTab,
      qt_meta_data_argTab, 0 }
};

const QMetaObject *argTab::metaObject() const
{
    return &staticMetaObject;
}

void *argTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_argTab))
        return static_cast<void*>(const_cast< argTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int argTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ControlChanged(); break;
        case 1: ControlSelected((*reinterpret_cast< ArgumentInterface*(*)>(_a[1]))); break;
        case 2: MoveUp(); break;
        case 3: MoveDown(); break;
        case 4: DeleteArgument(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void argTab::ControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void argTab::ControlSelected(ArgumentInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
