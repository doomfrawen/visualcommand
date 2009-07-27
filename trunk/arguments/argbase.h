#ifndef ARGBASE_H
#define ARGBASE_H

#include <QtGui/QWidget>
#include "qttreepropertybrowser.h"
#include "qtpropertymanager.h"
#include "qtvariantproperty.h"
#include "qttreepropertybrowser.h"
#include <QtLineEditFactory>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
#include "globals.h"
#include "argumentinterface.h"
namespace Ui {
    class ArgBase;
}

class ArgBase : public ArgumentInterface {
    Q_OBJECT
    Q_DISABLE_COPY(ArgBase)
public:
    explicit ArgBase();
    virtual ~ArgBase();
    QDomElement GetXMLElment(QDomDocument* doc);
    void SetEditMode();
    void SetRunMode();
    void SwapController(QWidget *NewController);
    void SetupBrowser(QtTreePropertyBrowser* browser);
    QString GetArgumentText(QString Input="");
    void SetArgumentFormat(QString Format);
    void LoadXMLInfo(QDomElement& Element);
signals:
    void MoveUpOneSignal();
    void MoveDownOneSignal();
    void ControlChanged();
    void DeleteMe();
    void ControlSelected(ArgumentInterface* Control);
protected:

    virtual void changeEvent(QEvent *e);
    QSize MySize;

    QtLineEditFactory LineEditFactory;
    QtCheckBoxFactory CheckBoxFactory;
    QtBoolPropertyManager Required;
    QtStringPropertyManager StringFormat;
    QtProperty* RequiredProperty;
    QtProperty* StringProperty;

protected slots:
    void mouseReleaseEvent(QMouseEvent *event = NULL);
    void MoveUpOne();
    void MoveDownOne();

    void EnabledClicked(bool in);
    void PropertyManagerChanged();
protected:
    QString  boolToString(bool in);
    Ui::ArgBase *m_ui;
};



#endif // ARGBASE_H
