#ifndef ARGNUMERIC_H
#define ARGNUMERIC_H
#include "argbase.h"
#include <QPlainTextEdit>
#include <QSpinBox>
#include <QtGui/QWidget>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>

#include "argumentinterface.h"
namespace Ui {
    class ArgBase;
}


class numericEditor : public ArgBase
{
  Q_OBJECT
  //Q_INTERFACES(ArgumentInterface)
public:
    explicit numericEditor();
    QString GetArgumentText(QString Input = "");
    QString GetName();
    QDomElement GetXMLElment(QDomDocument* doc);
    ArgumentInterface* GetNewInstance();
    ArgumentInterface* GetNewInstance(QDomElement& Element);
    void LoadXMLInfo(QDomElement &Element);
protected:
    QSpinBox Control;
};

#endif // ARGNUMERIC_H
