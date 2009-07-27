#include "argnumericform.h"
#include "ui_argnumericform.h"
#include <limits>
ArgNumericForm::ArgNumericForm(QWidget *parent) :

    m_ui(new Ui::ArgNumericForm)
{
    m_ui->setupUi(this);

    MinProperty = IntManager.addProperty("Min");
    MaxProperty = IntManager.addProperty("Max");

    IntManager.setValue(MinProperty,std::numeric_limits<int>::min());
    IntManager.setValue(MaxProperty,std::numeric_limits<int>::max());

    QObject::connect(&IntManager,SIGNAL(propertyChanged(QtProperty*)),this,SLOT(LimitsChanged()));
    LimitsChanged();
}

ArgNumericForm::~ArgNumericForm()
{
    delete m_ui;
}
void ArgNumericForm::LimitsChanged(){
    m_ui->horizontalSlider->setMaximum((MaxProperty->valueText().toInt()));
    m_ui->spinBox->setMaximum((MaxProperty->valueText().toInt()));

    m_ui->horizontalSlider->setMinimum((MinProperty->valueText().toInt()));
    m_ui->spinBox->setMinimum((MinProperty->valueText().toInt()));
}
void ArgNumericForm::changeEvent(QEvent *e)
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

void  ArgNumericForm::SliderChanged(int val){
    m_ui->spinBox->setValue(val);
    emit ControlChanged();
}
void ArgNumericForm::UpDownChanged(int val){
    m_ui->horizontalSlider->setValue(val);
    emit ControlChanged();
}

ArgFormInterface* ArgNumericForm::GetNewInstance(){
    return new ArgNumericForm();
}
ArgFormInterface* ArgNumericForm::GetNewInstance(QDomElement &Load){
    return GetNewInstance();
}
QDomElement ArgNumericForm::GetXMLElment(QDomElement* XMLEditor){

    XMLEditor->setAttribute("Number",QString::number(m_ui->horizontalSlider->value()));
    XMLEditor->setAttribute("Max",QString::number(m_ui->horizontalSlider->maximum()));
    XMLEditor->setAttribute("Min",QString::number(m_ui->horizontalSlider->minimum()));
    return *XMLEditor;
}
void ArgNumericForm::LoadXMLInfo(QDomElement& Element){
    int x;
    x = Element.attribute("Number").toInt();
    m_ui->horizontalSlider->setValue(x);
    m_ui->spinBox->setValue(x);

    x = Element.attribute("Max").toInt();
    m_ui->horizontalSlider->setMaximum(x);
    m_ui->spinBox->setMaximum(x);

    x = Element.attribute("Min").toInt();
    m_ui->horizontalSlider->setMinimum(x);
    m_ui->spinBox->setMinimum(x);

}
void ArgNumericForm::SetEditMode(){
}
void ArgNumericForm::SetRunMode(){}
void ArgNumericForm::SetupBrowser(QtTreePropertyBrowser* browser){
    browser->setFactoryForManager(&IntManager,&SpinBoxFactory);

    browser->addProperty(MinProperty);
    browser->addProperty(MaxProperty);

    browser->show();
}
QString ArgNumericForm::GetFormName(){
 return "NumericalForm";
}

QString ArgNumericForm::GetStringValue(QString  Form ){
    std::string Format = Form.toStdString();
    std::string Value = m_ui->spinBox->text().toStdString();

    QString temp;
    //used if the control is needed or not.
    temp = temp.sprintf(Format.c_str(),Value.c_str());

    return temp;
}
