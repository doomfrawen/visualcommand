/****************************************************************************
** Meta object code from reading C++ file 'argfileform.h'
**
** Created: Tue Jul 21 13:21:04 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "arguments/argfileform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'argfileform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArgFileForm[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   12,   12,   12, 0x0a,
      50,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ArgFileForm[] = {
    "ArgFileForm\0\0ControlChanged()\0"
    "fileButtonPressed()\0RemoveSelected()\0"
};

const QMetaObject ArgFileForm::staticMetaObject = {
    { &ArgFormInterface::staticMetaObject, qt_meta_stringdata_ArgFileForm,
      qt_meta_data_ArgFileForm, 0 }
};

const QMetaObject *ArgFileForm::metaObject() const
{
    return &staticMetaObject;
}

void *ArgFileForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArgFileForm))
        return static_cast<void*>(const_cast< ArgFileForm*>(this));
    return ArgFormInterface::qt_metacast(_clname);
}

int ArgFileForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArgFormInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ControlChanged(); break;
        case 1: fileButtonPressed(); break;
        case 2: RemoveSelected(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ArgFileForm::ControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
