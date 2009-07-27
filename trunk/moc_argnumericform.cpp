/****************************************************************************
** Meta object code from reading C++ file 'argnumericform.h'
**
** Created: Thu Jul 23 22:25:33 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "arguments/argnumericform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'argnumericform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArgNumericForm[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   33,   15,   15, 0x0a,
      56,   33,   15,   15, 0x0a,
      75,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ArgNumericForm[] = {
    "ArgNumericForm\0\0ControlChanged()\0val\0"
    "SliderChanged(int)\0UpDownChanged(int)\0"
    "LimitsChanged()\0"
};

const QMetaObject ArgNumericForm::staticMetaObject = {
    { &ArgFormInterface::staticMetaObject, qt_meta_stringdata_ArgNumericForm,
      qt_meta_data_ArgNumericForm, 0 }
};

const QMetaObject *ArgNumericForm::metaObject() const
{
    return &staticMetaObject;
}

void *ArgNumericForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArgNumericForm))
        return static_cast<void*>(const_cast< ArgNumericForm*>(this));
    return ArgFormInterface::qt_metacast(_clname);
}

int ArgNumericForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArgFormInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ControlChanged(); break;
        case 1: SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: UpDownChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: LimitsChanged(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ArgNumericForm::ControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
