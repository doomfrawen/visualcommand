#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogsearch.h"
#include "dialogupload.h"
#include "dialogsettings.h"
#include "dialogabout.h"
#include "arguments/argtab.h"
#include "arguments/argumentinterface.h"
#include <qinputdialog.h>
#include <QDir>
#include <QPluginLoader>
#include <QProcess>
#include <QSettings>

//Property Dialog Includes
#include "qtpropertymanager.h"
#include "qtvariantproperty.h"

#include <QtSpinBoxFactory>
#include <QtEnumEditorFactory>
#include <QFileDialog>
#include <QDomDocument>
#include <QDomElement>
#include <QDomText>
#include <QTextStream>
#include <QMessageBox>
#include <QFile>

#include "arguments/stringEditor.h"
#include "arguments/numericEditor.h"
#include "arguments/checkBoxEditor.h"
#include "arguments/argnumericform.h"
#include "arguments/argformbase.h"
#include "arguments/argfileform.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), Windows(false),Mac(false),Linux(false)
{
    QCoreApplication::setOrganizationName("ASamApplication");
QCoreApplication::setOrganizationDomain("AttackOfTheSam.com");
QCoreApplication::setApplicationName("VisualCommand");

    ui->setupUi(this);

    int Index=0;
    QWidget*tab = ui->tabWidget->widget(Index);
    ui->tabWidget->removeTab(Index);

    SwitchMode(true);
    //ui->dockWidgetProperties->setFloating(true);

    ui->horizontalLayout_3->addWidget(&browser);
    LoadNoPlugin();
    //LoadPlugins();
    delete tab;

    read_settings();
}
void MainWindow::read_settings(){
    QSettings settings;
    settings.beginGroup("RunModes");
    regularMode = settings.value("regularMode","cmd \\k").toString();
    adminMode = settings.value("adminMode","sudo cmd \\k").toString();
    settings.endGroup();
}
void MainWindow::write_settings(){
    QSettings settings;
    settings.beginGroup("RunModes");
    settings.setValue("regularMode",regularMode);
    settings.setValue("adminMode",adminMode);
    settings.endGroup();


}
void MainWindow::LoadPlugins(){
 /* QDir path( "E:\\VisualCommand\\VisualCommand\\plugins\\stringEditor\\debug" );

  foreach( QString filename, path.entryList(QDir::Files) )
  {
    QPluginLoader loader( path.absoluteFilePath( filename ) );
    QObject *couldBeArgument = loader.instance();

    if( couldBeArgument )
    {
      ArgumentInterface *Argument = qobject_cast<ArgumentInterface*>( couldBeArgument );
      if( Argument )
      {
        Arguments[Argument->GetName()] = Argument;
        ui->listWidgetArguments->addItem(Argument->GetName());
      }
      delete couldBeArgument;
    }
  }*/
}
void MainWindow::LoadNoPlugin(){
    ArgumentInterface * Argument;
    ArgFormInterface * ArgForm;

    Argument = new stringEditor();
    Arguments[Argument->GetName()] = Argument;
    ui->listWidgetArguments->addItem(Argument->GetName());

    Argument = new numericEditor();
    Arguments[Argument->GetName()] = Argument;
    ui->listWidgetArguments->addItem(Argument->GetName());

    Argument = new checkBoxEditor();
    Arguments[Argument->GetName()] = Argument;
    ui->listWidgetArguments->addItem(Argument->GetName());

    //Prettier Form Versions
    ArgForm = new ArgNumericForm();
    Argument = new ArgFormBase(ArgForm);
    Arguments[Argument->GetName()] = Argument;
    ui->listWidgetArguments->addItem(Argument->GetName());

    ArgForm = new ArgFileForm();
    Argument = new ArgFormBase(ArgForm);
    Arguments[Argument->GetName()] = Argument;
    ui->listWidgetArguments->addItem(Argument->GetName());

}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::LaunchSearch(){
    DialogSearch Test(this);
    Test.exec();
}

void MainWindow::LaunchUpload(){
    DialogUpload Test(this);

    Test.setLinux(Linux);
    Test.setMac(Mac);
    Test.setWindows(Windows);
    Test.setTitle(Title);
    Test.setAppName(AppName);
    Test.setAppWebsite(AppWebsite);
    Test.setDescription(Description);

    Test.exec();

    Linux       = Test.getLinux();
    Mac         = Test.getMac();
    Windows     = Test.getWindows();
    Title       = Test.getTitle();
    AppName     = Test.getAppName();
    AppWebsite  = Test.getAppWebsite();
    Description = Test.getDescription();

    ChangeText();
}
void MainWindow::EditSettings(){
    read_settings();
    DialogSettings settings;

    settings.exec();
    read_settings();
    //write_settings();


}
void MainWindow::EditAddWidget(QListWidgetItem* Item){
    argTab* tab =  dynamic_cast<argTab*>( ui->tabWidget->currentWidget());
    if(tab==0)
        return;
    QString WidgetName = Item->text();

    ArgumentInterface *Argument = Arguments[WidgetName];
    Argument = Argument->GetNewInstance();
    tab->AddWidget(Argument);

    ChangePropertyBrowser(Argument);


}
void  MainWindow::EditAddTab(){


    bool ok;
    QString text = QInputDialog::getText(this, tr("Create a tab"),
                                          tr("Tab Name"), QLineEdit::Normal,
                                          QString(""), &ok);
     if (ok && !text.isEmpty()){
        AddTab(text);
    }
}
void MainWindow::AddTab(QString text){
        argTab*tab = new argTab(text);
        tab->setObjectName(QString::fromUtf8("tab"));
        ui->tabWidget->addTab(tab,text);

        ui->tabWidget->setCurrentWidget(tab);
        QObject::connect(tab, SIGNAL(ControlChanged()),this,SLOT(ChangeText()));
        QObject::connect(tab, SIGNAL(ControlSelected(ArgumentInterface*)),this,SLOT(ChangePropertyBrowser(ArgumentInterface*)));
}
void  MainWindow::EditRemoveTab(int Index){

    //QWidget*tab = new QWidget();
    QWidget*tab = ui->tabWidget->widget(Index);
    ui->tabWidget->removeTab(Index);
    delete tab;

}
void MainWindow::ChangeText(){
 QString Text =this->AppName+" ";
 for(int x=0;x< ui->tabWidget->count();x++){
        argTab * tempTab = dynamic_cast<argTab*>( ui->tabWidget->widget(x));
        Text += tempTab->GetArgumentText();

 }
 ui->plainTextEditArgumentText->setPlainText(Text);
}
void MainWindow::SwitchMode(bool runMode){
    for(int x=0;x< ui->tabWidget->count();x++){
        argTab * tempTab = dynamic_cast<argTab*>( ui->tabWidget->widget(x));
        if(runMode)
            tempTab->setRunMode();
        else
            tempTab->setEditMode();
    }
    if(runMode){
        ui->tabWidget->setMovable(false);
        ui->tabWidget->setTabsClosable(false);
        ui->dockWidgetProperties->setVisible(false);
        ui->dockWidgetControls->setVisible(false);
    }
    else{
        ui->tabWidget->setMovable(true);
        ui->tabWidget->setTabsClosable(true);
        ui->dockWidgetProperties->setVisible(true);
        ui->dockWidgetControls->setVisible(true);
    }
}
void MainWindow::ChangePropertyBrowser(ArgumentInterface* Control){
    Control->SetupBrowser(&browser);
}
QString MainWindow::boolToString(bool in){
    if(in)
        return QString("True");
    return QString("False");
}
void MainWindow::FileSave(){
    QString filename = QFileDialog::getSaveFileName(this,
                                                    tr("Save Gui File"),
                                                    QDir::currentPath(),
                                                    tr("Gui files(*.gml)"));

    if(filename.isNull())
        return;

  QDomDocument document("GUIXML");

  QDomElement GuiFile = document.createElement( "VisualCommand" );
  GuiFile.setAttribute("Title",this->Title);
  GuiFile.setAttribute("AppName",this->AppName);
  GuiFile.setAttribute("WebSite",this->AppWebsite);
  GuiFile.setAttribute("Description",this->Description);

  GuiFile.setAttribute("Linux",boolToString(Linux));
  GuiFile.setAttribute("Mac",boolToString(Mac));
  GuiFile.setAttribute("Windows",boolToString(Windows));

  document.appendChild(GuiFile);
  for(int x=0;x< ui->tabWidget->count();x++){
        argTab * tempTab = dynamic_cast<argTab*>( ui->tabWidget->widget(x));
        QDomElement tag = tempTab->GetXMLElment(&document);
        GuiFile.appendChild(tag);
  }



  QFile file( filename );
  if( !file.open( QIODevice::WriteOnly | QIODevice::Text ) )
  {
    qDebug( "Failed to open file for writing." );
    return ;
  }

  QTextStream stream( &file );

  stream << document.toString();

  file.close();


}
void MainWindow::FileOpen(){
    QString filename = QFileDialog::getOpenFileName(this,
                                                    tr("Open Gui File"),
                                                    QDir::currentPath(),
                                                    tr("Gui files(*.gml);;All files(*.*)"));
    if(filename.isNull())
        return;
    QDomDocument doc("GUIXML");
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::information( this, "Open Error",
                            "Unable to open the file.\n"
                             );

        return;
    }
    QString Error;
    int line,column;
    if(!doc.setContent(&file,&Error,&line,&column)){
        file.close();
        QMessageBox::information( this, "Open Error",
                            "Unable to set the content of the file.\n"
                            +Error +
                            "\nLine "+QString::number(line)+
                            "\nCol"+QString::number(column)
                             );
        return;
    }

    QDomElement root = doc.documentElement();
    if(root.tagName()!="VisualCommand"){
        QMessageBox::information( this, "Open Error",
                            "Unable to find VisualCommand element.\n"
                             );
        return;
    }
    ui->tabWidget->clear();

    Title = root.attribute("Title","");

    this->AppName=root.attribute("AppName","");
    this->AppWebsite=root.attribute("WebSite","");
    this->Description=root.attribute("Description","");

    if(root.attribute("Linux","")=="True")
        Linux=true;
    else
        Linux = false;

    if(root.attribute("Mac","")=="True")
        Mac=true;
    else
        Mac = false;

    if(root.attribute("Windows","")=="True")
        Windows=true;
    else
        Windows = false;

    QDomNode n = root.firstChild();
    while(!n.isNull()){
        QDomElement e = n.toElement();
        if(!e.isNull()){
            AddTab(e.attribute("Name"));
            int count = ui->tabWidget->count()-1;
            argTab* tab = dynamic_cast<argTab*>(ui->tabWidget->widget(count));
            tab->AddWidgets(e,Arguments);
        }
        n=n.nextSibling();
    }
    file.close();
    ChangeText();
    this->SwitchMode(true);
}
void MainWindow::RunCommand(){




    QString process = "cmd /k "+ui->plainTextEditArgumentText->toPlainText();
    QProcess myProcess;
    myProcess.startDetached(process);
}

void MainWindow::LaunchAbout(){
     DialogAbout about;
     about.exec();
}
