#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "dialogsearch.h"

#include <QPluginLoader>
#include <QListWidgetItem>
#include "globals.h"
#include "qttreepropertybrowser.h"
#include "arguments/argumentinterface.h"
namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QtTreePropertyBrowser browser;
    void LoadPlugins();
    QMap<QString, ArgumentInterface*> Arguments;

    QString Title;
    QString AppName;
    QString AppWebsite;
    QString Description;
    QList<QString> Tags;
    bool Windows;
    bool Mac;
    bool Linux;
    QString boolToString(bool in);
    void AddTab(QString name);
    void LoadNoPlugin();

    void read_settings();
    void write_settings();

    QString regularMode;
    QString adminMode;
private slots:
    void LaunchSearch();
    void LaunchUpload();
    void ChangeText();
    //Edit Stufff
    void EditAddTab();
    void EditRemoveTab(int Index);
    void SwitchMode(bool runMode);
    void EditAddWidget(QListWidgetItem*);
    void ChangePropertyBrowser(ArgumentInterface* Control);
    void FileSave();
    void FileOpen();
    void RunCommand();
    void LaunchAbout();
    void EditSettings();
};

#endif // MAINWINDOW_H
