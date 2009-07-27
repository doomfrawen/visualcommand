#ifndef ARGSTRING_H
#define ARGSTRING_H
#include "argbase.h"
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QtGui/QWidget>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
#include "argumentinterface.h"
namespace Ui {
    class ArgBase;
}


class stringEditor : public ArgBase
{
  Q_OBJECT
  //Q_INTERFACES(ArgumentInterface)
public:
    explicit stringEditor();
    QString GetArgumentText(QString Input = "");
    QString GetName();
    QDomElement GetXMLElment(QDomDocument* doc);
    ArgumentInterface* GetNewInstance();
    ArgumentInterface* GetNewInstance(QDomElement& Element);
    void LoadXMLInfo(QDomElement &Element);
protected:
    QLineEdit Control;
};

#endif // ARGSTRING_H
