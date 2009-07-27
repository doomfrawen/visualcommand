#ifndef ARGSTRING_H
#define ARGSTRING_H
#include "argbase.h"
#include <QPlainTextEdit>

#include <QtGui/QWidget>

namespace Ui {
    class ArgBase;
}


class ArgString : public ArgBase
{
public:
    explicit ArgString(QWidget *parent = 0);
    QString GetArgumentText(QString Input = "");
protected:
    QPlainTextEdit Control;
};

#endif // ARGSTRING_H
