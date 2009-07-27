#ifndef ARGFILEFORM_H
#define ARGFILEFORM_H

#include <QtGui/QWidget>
#include "argforminterface.h"
#include <QtEnumEditorFactory>
#include <QtEnumPropertyManager>

namespace Ui {
    class ArgFileForm;
}

class ArgFileForm : public ArgFormInterface {
    Q_OBJECT
    Q_DISABLE_COPY(ArgFileForm)
public:
    explicit ArgFileForm(QWidget *parent = 0);
    virtual ~ArgFileForm();
public slots:
    void fileButtonPressed();
    void RemoveSelected();
protected:
    virtual void changeEvent(QEvent *e);
    void launchSaveDialog();
    void changeButtonText();
    QString FileNames;
    QtEnumEditorFactory EnumFactory;
    QtLineEditFactory LineEditFactory;
    QtStringPropertyManager StringManager;
    QtProperty* StringProperty;
    QtProperty* SurroundFomratProperty;
    QtProperty* SeperatorFormatProperty;

    //QtStringEditorFactory
    QtEnumPropertyManager EnumManager;
    QtProperty *FileModeProperty;
    QtProperty *MultipleFilesProperty;
    QtProperty *DirectorysOnlyProperty;
    QtProperty *FilterProperty;
public:
    ArgFormInterface * GetNewInstance();
    ArgFormInterface *  GetNewInstance(QDomElement& Element);
    QDomElement GetXMLElment(QDomElement* doc);
    void LoadXMLInfo(QDomElement& Element);
    void SetEditMode();
    void SetRunMode();
    void SetupBrowser(QtTreePropertyBrowser* browser);
    QString GetFormName(){return "FileForm";}
    QString GetInitalFormat(){return "-v %s";}
    QString GetStringValue(QString Format );
signals:
    void ControlChanged();
private:
    Ui::ArgFileForm *m_ui;
};

#endif // ARGFILEFORM_H
