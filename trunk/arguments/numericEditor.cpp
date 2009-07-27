#include "numericEditor.h"
#include "argbase.h"
#include "ui_argbase.h"
#include <string>
#include <QtPlugin>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
numericEditor::numericEditor() :ArgBase()
{
    //Place the controller in the proper spot
    SwapController(&Control);
    //Connect the control change signal up

    QObject::connect(&Control, SIGNAL(valueChanged(int)), this, SIGNAL(ControlChanged()));
    //Setup the argument text
    this->SetArgumentFormat("%s");
    //Setup the size
    MySize.setHeight(20);
    MySize.setWidth(374);
}
QString numericEditor::GetArgumentText(QString Input){

    std::string Format = StringFormat.value(StringProperty).toStdString();
    std::string Value = QString::number(Control.value()).toStdString();

    QString temp;
    //used if the control is needed or not.
    temp = temp.sprintf(Format.c_str(),Value.c_str());

    return ArgBase::GetArgumentText(temp);

}
QString numericEditor::GetName(){
    //TODO allow spaces & xml characters somehow
    return QString("numericEditor");
}
ArgumentInterface* numericEditor::GetNewInstance(){
    return new numericEditor();
}

QDomElement numericEditor::GetXMLElment(QDomDocument* doc){
    QDomElement XMLEditor =ArgBase::GetXMLElment(doc);
    XMLEditor.setAttribute("Number",QString::number(Control.value()));
    return XMLEditor;
}
ArgumentInterface* numericEditor::GetNewInstance(QDomElement& Element){
    ArgumentInterface *NewArg = this->GetNewInstance();
    NewArg->LoadXMLInfo(Element);
    return NewArg;
}
void numericEditor::LoadXMLInfo(QDomElement& Element){
    ArgBase::LoadXMLInfo(Element);
    int x;
    Element.attribute("Number").setNum(x);
    Control.setValue(x);

}
//Q_EXPORT_PLUGIN2( numericEditorPlugin, numericEditor )
