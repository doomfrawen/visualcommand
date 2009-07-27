#include "stringEditor.h"
#include "argbase.h"
#include "ui_argbase.h"
#include <string>
#include <QtPlugin>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
stringEditor::stringEditor() :ArgBase()
{

    //Place the controller in the proper spot
    SwapController(&Control);
    //Connect the control change signal up

    QObject::connect(&Control, SIGNAL( textChanged(const QString &)), this, SIGNAL(ControlChanged()));
    //Setup the argument text
    this->SetArgumentFormat("%s");
    //Setup the size
    MySize.setHeight(20);
    MySize.setWidth(374);
}
QString stringEditor::GetArgumentText(QString Input){

    std::string Format = StringFormat.value(StringProperty).toStdString();
    std::string Value = Control.text().toStdString();

    QString temp;
    //used if the control is needed or not.
    temp = temp.sprintf(Format.c_str(),Value.c_str());

    return ArgBase::GetArgumentText(temp);

}
QString stringEditor::GetName(){
    //TODO allow spaces & xml characters somehow
    return QString("StringEditor");
}
ArgumentInterface* stringEditor::GetNewInstance(){
    return new stringEditor();
}

QDomElement stringEditor::GetXMLElment(QDomDocument* doc){
    QDomElement XMLEditor =ArgBase::GetXMLElment(doc);
    XMLEditor.setAttribute("String",Control.text());
    return XMLEditor;
}
ArgumentInterface* stringEditor::GetNewInstance(QDomElement& Element){
    ArgumentInterface *NewArg = this->GetNewInstance();
    NewArg->LoadXMLInfo(Element);
    return NewArg;
}
void stringEditor::LoadXMLInfo(QDomElement& Element){
    ArgBase::LoadXMLInfo(Element);
    Control.setText(Element.attribute("String"));

}
//Q_EXPORT_PLUGIN2( StringEditorPlugin, stringEditor )
