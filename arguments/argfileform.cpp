#include "argfileform.h"
#include "ui_argfileform.h"
#include <QFileDialog>
#include <QDomElement>

ArgFileForm::ArgFileForm(QWidget *parent) :

    m_ui(new Ui::ArgFileForm)
{
    m_ui->setupUi(this);
    FileModeProperty = EnumManager.addProperty("FileMode");
    QStringList Modes;
    Modes << "Open File" << "Open Files" << "Open Directory" << "Open DirectorieS" << "Save File" << "Save FileS";
    EnumManager.setEnumNames(FileModeProperty,Modes);
    EnumManager.setValue(FileModeProperty,1);

    StringProperty = StringManager.addProperty("File Filter");
    StringManager.setValue(StringProperty,"Images (*.png *.xpm *.jpg);;Text Files (*.txt);; All Files(*.*)");

    SurroundFomratProperty = StringManager.addProperty("Surround Format");
    StringManager.setValue(SurroundFomratProperty,"\"%s\"");

    SeperatorFormatProperty = StringManager.addProperty("Seperator Format");
    StringManager.setValue(SeperatorFormatProperty,";");

    changeButtonText();
}
void ArgFileForm::RemoveSelected(){
    qDeleteAll(m_ui->listWidget->selectedItems());

}
ArgFileForm::~ArgFileForm()
{
    delete m_ui;
}

void ArgFileForm::changeEvent(QEvent *e)
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
void ArgFileForm::fileButtonPressed(){
 int Mode = EnumManager.value(FileModeProperty);
 QString FileFormat = StringManager.value(StringProperty);
 QString Result="";
 QStringList Results;
 switch(Mode){

     case 0:// "Open File"
         Result = QFileDialog::getOpenFileName(this,"Open File",".",FileFormat);
         if(Result == "")
             break;

         m_ui->listWidget->clear();
         m_ui->listWidget->addItem(Result);

        break;
     case 1://<< "Open Files"
         Results = QFileDialog::getOpenFileNames(this,"Open Files",".",FileFormat);
         if(Results.empty())
             break;

         m_ui->listWidget->addItems(Results);

     break;
     case 2://<< "Open Directory"
         Result = QFileDialog::getExistingDirectory(this,"Open Directory",".");
         if(Result == "")
             break;

         m_ui->listWidget->clear();
         m_ui->listWidget->addItem(Result);

        break;

     case 3://<< "Open DirectorieS"
         Result = QFileDialog::getExistingDirectory(this,"Open Directory",".");
         if(Result == "")
             break;

         m_ui->listWidget->addItem(Result);
         break;
     case 4://<< "Save File"
         Result = QFileDialog::getSaveFileName(this,"Save File",".",FileFormat);
         if(Result == "")
             break;

         m_ui->listWidget->clear();
         m_ui->listWidget->addItem(Result);

        break;

     case 5://<< "Save FileS";
         Result = QFileDialog::getSaveFileName(this,"Save File",".",FileFormat);
         if(Result == "")
             break;
         m_ui->listWidget->addItem(Result);

     default:
     break;
 }
 emit ControlChanged();
}

void ArgFileForm::changeButtonText(){
 int Mode = EnumManager.value(FileModeProperty);

 switch(Mode){

     case 0:// "Open File"
            m_ui->pushButton->setText(tr("Open File"));
            m_ui->pushButtonRemoveSelected->setVisible(false);
        break;
     case 1://<< "Open Files"
            m_ui->pushButton->setText(tr("Open Files"));
            m_ui->pushButtonRemoveSelected->setVisible(true);
        break;
     case 2://<< "Open Directory"
            m_ui->pushButton->setText(tr("Open Directory"));
            m_ui->pushButtonRemoveSelected->setVisible(false);
        break;

     case 3://<< "Open DirectorieS"
            m_ui->pushButton->setText(tr("Open Directories"));
            m_ui->pushButtonRemoveSelected->setVisible(true);
         break;
     case 4://<< "Save File"
            m_ui->pushButton->setText(tr("Save File"));
            m_ui->pushButtonRemoveSelected->setVisible(false);
        break;
     case 5://<< "Save Files";
            m_ui->pushButton->setText(tr("Save Files"));
            m_ui->pushButtonRemoveSelected->setVisible(true);
        break;
     default:
     break;
 }

}
ArgFormInterface* ArgFileForm::GetNewInstance(){
    return new ArgFileForm();
}
ArgFormInterface* ArgFileForm::GetNewInstance(QDomElement &Load){
    return GetNewInstance();
}
QDomElement ArgFileForm::GetXMLElment(QDomElement* XMLEditor){
    int Mode = EnumManager.value(FileModeProperty);
    QString FileFormat = StringManager.value(StringProperty);
    QString Seperator = StringManager.value(SeperatorFormatProperty);
    QString Surround = StringManager.value(SurroundFomratProperty);

    XMLEditor->setAttribute("Mode",QString::number(Mode));
    XMLEditor->setAttribute("Filter",FileFormat);
    XMLEditor->setAttribute("Seperator",Seperator);
    XMLEditor->setAttribute("Surround",Surround);

    return *XMLEditor;
}

void ArgFileForm::LoadXMLInfo(QDomElement& Element){
    int Mode =0;
    QString temp;

    Mode = Element.attribute("Mode").toInt();
    EnumManager.setValue(FileModeProperty,Mode);

    temp = Element.attribute("Filter");
    StringManager.setValue(StringProperty,temp);

    temp = Element.attribute("Seperator");
    StringManager.setValue(SeperatorFormatProperty,temp);

    temp = Element.attribute("Surround");
    StringManager.setValue(SurroundFomratProperty,temp);

    changeButtonText();
    emit ControlChanged();
}

void ArgFileForm::SetEditMode(){
}
void ArgFileForm::SetRunMode(){}
void ArgFileForm::SetupBrowser(QtTreePropertyBrowser* browser){

    browser->setFactoryForManager(&EnumManager,&EnumFactory);

    browser->addProperty(FileModeProperty);

    browser->setFactoryForManager(&StringManager,&LineEditFactory);

    browser->addProperty(StringProperty);
    browser->addProperty(SurroundFomratProperty);
    browser->addProperty(SeperatorFormatProperty);

    browser->show();
}


QString ArgFileForm::GetStringValue(QString  Form ){
    changeButtonText();
    QString Result ="";
    QString temp;

    std::string Value;
    std::string Format = Form.toStdString();
    std::string Surround = StringManager.value(SurroundFomratProperty).toStdString();
    QString Seperator  = StringManager.value(SeperatorFormatProperty);


    int length = m_ui->listWidget->count();
    if(length <1 )
        return "";
    Value = m_ui->listWidget->item(0)->text().toStdString();
    Result = Result.sprintf(Surround.c_str(),Value.c_str());

    for( int x=1;x<length;x++){

        Value = m_ui->listWidget->item(x)->text().toStdString();
        temp = temp.sprintf(Surround.c_str(),Value.c_str());
        Result += Seperator + temp;
    }

    //used if the control is needed or not.
    temp = temp.sprintf(Format.c_str(),Result.toStdString().c_str());

    return temp;
}
