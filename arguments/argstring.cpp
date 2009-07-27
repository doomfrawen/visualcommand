#include "argstring.h"
#include "argbase.h"
#include "ui_argbase.h"
#include <string>
ArgString::ArgString(QWidget *parent ) :ArgBase()
{
    SwapController(&Control);
    QObject::connect(&Control, SIGNAL(textChanged ()), this, SIGNAL(ControlChanged()));
    this->SetArgumentFormat("%s");
    MySize.setHeight(20);
    MySize.setWidth(374);
}
QString ArgString::GetArgumentText(QString Input){

    std::string Format = StringFormat.value(StringProperty).toStdString();
    std::string Value = Control.toPlainText().toStdString();

    QString temp;
    //used if the control is needed or not.
    temp = temp.sprintf(Format.c_str(),Value.c_str());

    return ArgBase::GetArgumentText(temp);

}
