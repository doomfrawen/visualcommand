#include "argbase.h"
#include "ui_argbase.h"
#include "argtab.h"
#include <QtGlobal>

#include <QtSpinBoxFactory>
#include <QtEnumEditorFactory>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
ArgBase::ArgBase() :

    m_ui(new Ui::ArgBase)
{
    m_ui->setupUi(this);

    RequiredProperty =  Required.addProperty("Optional");
    Required.setValue(RequiredProperty,true);
    RequiredProperty->setToolTip("Not checked if the argument is optional.");
    QObject::connect(&Required, SIGNAL(propertyChanged(QtProperty*)),this,SLOT(PropertyManagerChanged()));

    StringProperty = StringFormat.addProperty("String Format");
    StringProperty->setToolTip("String output format printf style");
    QObject::connect(&StringFormat, SIGNAL(propertyChanged(QtProperty*)),this,SLOT(PropertyManagerChanged()));
    QObject::connect(m_ui->pushButtonDeleteMe,SIGNAL(clicked()),this,SIGNAL(DeleteMe()));
    //QObject::connect(m_ui->groupBoxFormat,SIGNAL(clicked()),this,SIGNAL(ControlSelected(this)));
    QObject::connect(m_ui->groupBoxFormat,SIGNAL(clicked()),this,SLOT(mouseReleaseEvent()));
}
void ArgBase::SetArgumentFormat(QString Format){

   StringFormat.setValue(StringProperty,Format);

}
ArgBase::~ArgBase()
{
    delete m_ui;
}
void ArgBase::SwapController(QWidget *NewController){
    m_ui->horizontalLayout->removeWidget(m_ui->widgetControl);
    delete m_ui->widgetControl;

    m_ui->widgetControl = NewController ;
    m_ui->horizontalLayout_4->insertWidget(1,m_ui->widgetControl);
    //m_ui->horizontalLayout->insertWidget(1,m_ui->widgetControl);
    EnabledClicked(m_ui->checkBoxEnabled->isChecked());

}
QString ArgBase::GetArgumentText(QString Input){
    if(m_ui->checkBoxEnabled->isChecked()){
        return Input+" ";
    }
    else{
        return QString("");
    }
}
void ArgBase::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void ArgBase::MoveUpOne(){
    emit MoveUpOneSignal();
}
void ArgBase::MoveDownOne(){
    emit this->MoveDownOneSignal();
}

void ArgBase::EnabledClicked(bool in){
    if(in){
        m_ui->widgetControl->setDisabled(false);
    }
    else{
        m_ui->widgetControl->setDisabled(true);
    }
    emit ControlChanged();
}
void ArgBase::SetRunMode(){
    m_ui->frameUpDownDelete->setHidden(true );
    m_ui->textBrowserDescription->setReadOnly(true);
    //m_ui->textBrowserDescription->setDisabled(true);
    int width,height;
    width = m_ui->widgetControl->width();
    height = m_ui->widgetControl->height();
    this->resize(width,height);
    //this->resize(MySize);

}
void ArgBase::SetEditMode(){
    m_ui->frameUpDownDelete->setHidden(false);
    m_ui->textBrowserDescription->setReadOnly(false);
    //m_ui->textBrowserDescription->setDisabled(false);
    this->resize(qMax(374,MySize.width()),qMax(144,MySize.height()));
}
void ArgBase::mouseReleaseEvent(QMouseEvent *event){
    emit ControlSelected(this);
}
void ArgBase::SetupBrowser(QtTreePropertyBrowser* browser){
    browser->clear();
    browser->setEnabled(true);


    browser->setFactoryForManager(&Required, &CheckBoxFactory);
    browser->addProperty(RequiredProperty);

    browser->setFactoryForManager(&StringFormat,&LineEditFactory);
    browser->addProperty(StringProperty);

    browser->show();
}
void ArgBase::PropertyManagerChanged(){
    m_ui->groupBoxFormat->setTitle(StringFormat.value(StringProperty));
    bool temp = Required.value(RequiredProperty);
    if(temp){
        //m_ui->checkBoxEnabled->setChecked(false);
        m_ui->frameEnabled->setShown(true);
    }
    else{
        m_ui->checkBoxEnabled->setChecked(true);
        EnabledClicked(true);
        m_ui->frameEnabled->setShown(false);
    }
    emit ControlChanged();
}


QDomElement ArgBase::GetXMLElment(QDomDocument* doc){
    QDomElement XMLEditor = doc->createElement(this->GetName());
    XMLEditor.setAttribute("Required",boolToString(Required.value(RequiredProperty)));
    XMLEditor.setAttribute("StringFormat",StringFormat.value(StringProperty));
    XMLEditor.setAttribute("RequiredChecked",boolToString(m_ui->checkBoxEnabled->isChecked()));
    XMLEditor.setAttribute("Description",m_ui->textBrowserDescription->toPlainText());

    return XMLEditor;
}
QString  ArgBase::boolToString(bool in){
    if(in)
        return QString("True");
    return QString("False");
}
void ArgBase::LoadXMLInfo(QDomElement& Element){
    Required.setValue( RequiredProperty,( Element.attribute("Required") == "True"));
    SetArgumentFormat( Element.attribute("StringFormat"));
    m_ui->checkBoxEnabled->setChecked( Element.attribute("RequiredChecked") =="True");
    EnabledClicked(m_ui->checkBoxEnabled->isChecked());
    m_ui->textBrowserDescription->setPlainText( Element.attribute("Description"));

}
