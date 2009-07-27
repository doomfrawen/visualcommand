#ifndef ARGNUMERICFORM_H
#define ARGNUMERICFORM_H
#include "argbase.h"
#include <QtGui/QWidget>
#include "argforminterface.h"
namespace Ui {
    class ArgNumericForm;
}

class ArgNumericForm : public ArgFormInterface{
    Q_OBJECT
    Q_DISABLE_COPY(ArgNumericForm)
public:
    explicit ArgNumericForm(QWidget *parent = 0);
    virtual ~ArgNumericForm();
    QString GetName();
    ArgFormInterface* GetNewInstance();
    ArgFormInterface* GetNewInstance(QDomElement& Load);
public slots:
    void SliderChanged(int val);
    void UpDownChanged(int val);
    void LimitsChanged();
protected:
    QtIntPropertyManager IntManager;
    QtProperty* MinProperty;
    QtProperty* MaxProperty;
    QtSpinBoxFactory SpinBoxFactory;

protected:
    virtual void changeEvent(QEvent *e);
public:
    QDomElement GetXMLElment(QDomElement* doc);
    void LoadXMLInfo(QDomElement& Element);
    void SetEditMode();
    void SetRunMode();
    void SetupBrowser(QtTreePropertyBrowser* browser);
    QString GetFormName();
    QString GetInitalFormat(){return "-v %s";}
    QString GetStringValue(QString Format );
signals:
    void ControlChanged();
private:
    Ui::ArgNumericForm *m_ui;
};

#endif // ARGNUMERICFORM_H
