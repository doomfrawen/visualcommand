#ifndef checkBoxEditor_H
#define checkBoxEditor_H
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


class checkBoxEditor : public ArgBase
{
  Q_OBJECT
  //Q_INTERFACES(ArgumentInterface)
public:
    explicit checkBoxEditor();
    QString GetArgumentText(QString Input = "");
    QString GetName();
    QDomElement GetXMLElment(QDomDocument* doc);
    ArgumentInterface* GetNewInstance();
    ArgumentInterface* GetNewInstance(QDomElement& Element);
    void LoadXMLInfo(QDomElement &Element);
protected:

};

#endif // ARGNUMERIC_H
