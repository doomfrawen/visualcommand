#include "argformbase.h"



ArgFormBase::ArgFormBase(ArgFormInterface *ArgForm): ArgBase(){
    this->ArgForm = ArgForm;
    SwapController(ArgForm);
    ArgBase::SetArgumentFormat(ArgForm->GetInitalFormat());
    QObject::connect(ArgForm, SIGNAL(ControlChanged()), this, SIGNAL(ControlChanged()));
}

void ArgFormBase::SetEditMode(){
        ArgBase::SetEditMode();
        ArgForm->SetEditMode();
}
void ArgFormBase::SetRunMode(){
    ArgBase::SetRunMode();
    ArgForm->SetRunMode();
}

void ArgFormBase::SetupBrowser(QtTreePropertyBrowser* browser){
    ArgBase::SetupBrowser(browser);
    ArgForm->SetupBrowser(browser);
}
QString ArgFormBase::GetArgumentText(QString Input){
    std::string Format = StringFormat.value(StringProperty).toStdString();
    QString result = ArgForm->GetStringValue(Format.c_str());
    return ArgBase::GetArgumentText(result);
}

QString ArgFormBase::GetName(){
    return ArgForm->GetFormName();
}
ArgumentInterface* ArgFormBase::GetNewInstance(){
    return new ArgFormBase(ArgForm->GetNewInstance());
}
ArgumentInterface* ArgFormBase::GetNewInstance(QDomElement& Element){
    ArgumentInterface* temp = GetNewInstance();
    temp->LoadXMLInfo(Element);
    return temp;
}
void ArgFormBase::LoadXMLInfo(QDomElement& Element){
    ArgBase::LoadXMLInfo(Element);
    ArgForm->LoadXMLInfo(Element);
}
QDomElement ArgFormBase::GetXMLElment(QDomDocument* doc){
    QDomElement temp = ArgBase::GetXMLElment(doc);
    temp = ArgForm->GetXMLElment(&temp);
    return temp;
}
