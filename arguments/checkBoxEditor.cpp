#include "checkBoxEditor.h"
#include "argbase.h"
#include "ui_argbase.h"
#include <string>
#include <QtPlugin>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
checkBoxEditor::checkBoxEditor() :ArgBase()
{

    //Setup the argument text
    this->SetArgumentFormat("-value ");
    //Setup the size
    MySize.setHeight(20);
    MySize.setWidth(374);
}
QString checkBoxEditor::GetArgumentText(QString Input){

    QString temp= StringFormat.value(StringProperty);

    return ArgBase::GetArgumentText(temp);

}
QString checkBoxEditor::GetName(){
    //TODO allow spaces & xml characters somehow
    return QString("checkBoxEditor");
}
ArgumentInterface* checkBoxEditor::GetNewInstance(){
    return new checkBoxEditor();
}

QDomElement checkBoxEditor::GetXMLElment(QDomDocument* doc){
    QDomElement XMLEditor =ArgBase::GetXMLElment(doc);    
    return XMLEditor;
}
ArgumentInterface* checkBoxEditor::GetNewInstance(QDomElement& Element){
    ArgumentInterface *NewArg = this->GetNewInstance();
    NewArg->LoadXMLInfo(Element);
    return NewArg;
}
void checkBoxEditor::LoadXMLInfo(QDomElement& Element){
    ArgBase::LoadXMLInfo(Element);

}
//Q_EXPORT_PLUGIN2( checkBoxEditorPlugin, checkBoxEditor )
