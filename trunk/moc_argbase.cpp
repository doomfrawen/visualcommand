/****************************************************************************
** Meta object code from reading C++ file 'argbase.h'
**
** Created: Thu Jul 23 22:25:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "arguments/argbase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'argbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArgBase[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      27,    8,    8,    8, 0x05,
      47,    8,    8,    8, 0x05,
      64,    8,    8,    8, 0x05,
      83,   75,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,  119,    8,    8, 0x09,
     157,    8,    8,    8, 0x29,
     177,    8,    8,    8, 0x09,
     189,    8,    8,    8, 0x09,
     206,  203,    8,    8, 0x09,
     227,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ArgBase[] = {
    "ArgBase\0\0MoveUpOneSignal()\0"
    "MoveDownOneSignal()\0ControlChanged()\0"
    "DeleteMe()\0Control\0"
    "ControlSelected(ArgumentInterface*)\0"
    "event\0mouseReleaseEvent(QMouseEvent*)\0"
    "mouseReleaseEvent()\0MoveUpOne()\0"
    "MoveDownOne()\0in\0EnabledClicked(bool)\0"
    "PropertyManagerChanged()\0"
};

const QMetaObject ArgBase::staticMetaObject = {
    { &ArgumentInterface::staticMetaObject, qt_meta_stringdata_ArgBase,
      qt_meta_data_ArgBase, 0 }
};

const QMetaObject *ArgBase::metaObject() const
{
    return &staticMetaObject;
}

void *ArgBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArgBase))
        return static_cast<void*>(const_cast< ArgBase*>(this));
    return ArgumentInterface::qt_metacast(_clname);
}

int ArgBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArgumentInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: MoveUpOneSignal(); break;
        case 1: MoveDownOneSignal(); break;
        case 2: ControlChanged(); break;
        case 3: DeleteMe(); break;
        case 4: ControlSelected((*reinterpret_cast< ArgumentInterface*(*)>(_a[1]))); break;
        case 5: mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: mouseReleaseEvent(); break;
        case 7: MoveUpOne(); break;
        case 8: MoveDownOne(); break;
        case 9: EnabledClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: PropertyManagerChanged(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ArgBase::MoveUpOneSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ArgBase::MoveDownOneSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ArgBase::ControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ArgBase::DeleteMe()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ArgBase::ControlSelected(ArgumentInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
