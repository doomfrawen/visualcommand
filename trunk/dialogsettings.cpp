#include "dialogsettings.h"
#include "ui_dialogsettings.h"
#include <QSettings>
DialogSettings::DialogSettings(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogSettings)
{
    m_ui->setupUi(this);
    QString regularMode;
    QSettings settings;
    settings.beginGroup("RunModes");
    regularMode = settings.value("regularMode","cmd \\k").toString();
    //settings.setValue("adminMode",adminMode);
    settings.endGroup();
    m_ui->lineEditTerminal->setText(regularMode);


}

DialogSettings::~DialogSettings()
{
    delete m_ui;
}

void DialogSettings::changeEvent(QEvent *e)
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

void DialogSettings::UpdateSettings(){
    QSettings settings;
    settings.beginGroup("RunModes");
    settings.setValue("regularMode",m_ui->lineEditTerminal->text());
//    settings.setValue("adminMode",adminMode);
    settings.endGroup();
}
