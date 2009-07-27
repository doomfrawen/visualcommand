#include "dialogupload.h"
#include "ui_dialogupload.h"

DialogUpload::DialogUpload(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogUpload)
{
    m_ui->setupUi(this);
}

DialogUpload::~DialogUpload()
{
    delete m_ui;
}

void DialogUpload::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void DialogUpload::setTitle(QString title){
    return m_ui->plainTextEditTitle->setPlainText(title);
}
void DialogUpload::setAppName(QString appName){
    return m_ui->plainTextEditApplication->setPlainText(appName);
}
void DialogUpload::setAppWebsite(QString Website){
    return m_ui->plainTextEditWebsite->setPlainText(Website);
}
void DialogUpload::setDescription(QString description){
    return m_ui->textEditDescription->setHtml(description);
}
void DialogUpload::setWindows(bool in){
    return m_ui->checkBoxWindows->setChecked(in);
}
void DialogUpload::setLinux(bool in){
    return m_ui->checkBoxWindows->setChecked(in);
}
void DialogUpload::setMac(bool in){
    return m_ui->checkBoxWindows->setChecked(in);
}

QString DialogUpload::getTitle(){
    return m_ui->plainTextEditTitle->toPlainText();
}
QString DialogUpload::getAppName(){
    return m_ui->plainTextEditApplication->toPlainText();
}
QString DialogUpload::getAppWebsite(){
    return m_ui->plainTextEditWebsite->toPlainText();
}
QString DialogUpload::getDescription(){
    return m_ui->textEditDescription->toHtml();
}
QList<QString> DialogUpload::getTags(){
    return QList<QString>();
}
bool DialogUpload::getWindows(){
    return m_ui->checkBoxWindows->isChecked();
}
bool DialogUpload::getLinux(){
    return m_ui->checkBoxLinux->isChecked();
}
bool DialogUpload::getMac(){
    return m_ui->checkBoxMac->isChecked();
}
