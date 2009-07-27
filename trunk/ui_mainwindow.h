/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Jul 27 00:35:26 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRunMode;
    QAction *actionEdit_Mode;
    QAction *actionSearch;
    QAction *actionUpload_GUI;
    QAction *actionAdd_Tab;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionSettings;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QPushButton *pushButtonRun;
    QPlainTextEdit *plainTextEditArgumentText;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBarEdit;
    QDockWidget *dockWidgetProperties;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QDockWidget *dockWidgetControls;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidgetArguments;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(424, 415);
        MainWindow->setMinimumSize(QSize(0, 390));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_04.png")), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionRunMode = new QAction(MainWindow);
        actionRunMode->setObjectName(QString::fromUtf8("actionRunMode"));
        actionRunMode->setCheckable(true);
        actionRunMode->setChecked(true);
        actionRunMode->setIcon(icon);
        actionEdit_Mode = new QAction(MainWindow);
        actionEdit_Mode->setObjectName(QString::fromUtf8("actionEdit_Mode"));
        actionEdit_Mode->setCheckable(true);
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_20.png")), QIcon::Normal, QIcon::Off);
        actionEdit_Mode->setIcon(icon1);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_02.png")), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon2);
        actionUpload_GUI = new QAction(MainWindow);
        actionUpload_GUI->setObjectName(QString::fromUtf8("actionUpload_GUI"));
        QIcon icon3;
        icon3.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_30.png")), QIcon::Normal, QIcon::Off);
        actionUpload_GUI->setIcon(icon3);
        actionAdd_Tab = new QAction(MainWindow);
        actionAdd_Tab->setObjectName(QString::fromUtf8("actionAdd_Tab"));
        QIcon icon4;
        icon4.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_13.png")), QIcon::Normal, QIcon::Off);
        actionAdd_Tab->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon5;
        icon5.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_11.png")), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon6;
        icon6.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/32px-Crystal_Clear_app_package.png")), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon6);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setMargin(11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setMargin(11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget->addTab(tab, QString());

        verticalLayout_2->addWidget(tabWidget);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 50));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setMargin(11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        pushButtonRun = new QPushButton(widget);
        pushButtonRun->setObjectName(QString::fromUtf8("pushButtonRun"));
        QIcon icon7;
        icon7.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_27.png")), QIcon::Normal, QIcon::Off);
        pushButtonRun->setIcon(icon7);
        pushButtonRun->setIconSize(QSize(20, 20));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButtonRun);

        plainTextEditArgumentText = new QPlainTextEdit(widget);
        plainTextEditArgumentText->setObjectName(QString::fromUtf8("plainTextEditArgumentText"));
        plainTextEditArgumentText->setMaximumSize(QSize(16777215, 30));
        plainTextEditArgumentText->setFrameShape(QFrame::StyledPanel);

        formLayout->setWidget(0, QFormLayout::FieldRole, plainTextEditArgumentText);


        horizontalLayout->addLayout(formLayout);


        verticalLayout_2->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 424, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBarEdit = new QToolBar(MainWindow);
        toolBarEdit->setObjectName(QString::fromUtf8("toolBarEdit"));
        toolBarEdit->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarEdit);
        dockWidgetProperties = new QDockWidget(MainWindow);
        dockWidgetProperties->setObjectName(QString::fromUtf8("dockWidgetProperties"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout_3 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setMargin(11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dockWidgetProperties->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidgetProperties);
        dockWidgetControls = new QDockWidget(MainWindow);
        dockWidgetControls->setObjectName(QString::fromUtf8("dockWidgetControls"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        horizontalLayout_4 = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setMargin(11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        listWidgetArguments = new QListWidget(dockWidgetContents_2);
        listWidgetArguments->setObjectName(QString::fromUtf8("listWidgetArguments"));

        horizontalLayout_4->addWidget(listWidgetArguments);

        dockWidgetControls->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidgetControls);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionSettings);
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionRunMode);
        mainToolBar->addAction(actionSearch);
        mainToolBar->addAction(actionEdit_Mode);
        toolBarEdit->addAction(actionSave);
        toolBarEdit->addAction(actionUpload_GUI);
        toolBarEdit->addSeparator();
        toolBarEdit->addAction(actionAdd_Tab);
        toolBarEdit->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionSearch, SIGNAL(activated()), MainWindow, SLOT(LaunchSearch()));
        QObject::connect(actionEdit_Mode, SIGNAL(triggered()), actionRunMode, SLOT(toggle()));
        QObject::connect(actionRunMode, SIGNAL(triggered()), actionEdit_Mode, SLOT(toggle()));
        QObject::connect(actionEdit_Mode, SIGNAL(toggled(bool)), toolBarEdit, SLOT(setEnabled(bool)));
        QObject::connect(actionUpload_GUI, SIGNAL(activated()), MainWindow, SLOT(LaunchUpload()));
        QObject::connect(actionAdd_Tab, SIGNAL(activated()), MainWindow, SLOT(EditAddTab()));
        QObject::connect(tabWidget, SIGNAL(tabCloseRequested(int)), MainWindow, SLOT(EditRemoveTab(int)));
        QObject::connect(actionRunMode, SIGNAL(toggled(bool)), MainWindow, SLOT(SwitchMode(bool)));
        QObject::connect(listWidgetArguments, SIGNAL(itemDoubleClicked(QListWidgetItem*)), MainWindow, SLOT(EditAddWidget(QListWidgetItem*)));
        QObject::connect(actionOpen, SIGNAL(activated()), MainWindow, SLOT(FileOpen()));
        QObject::connect(actionSave, SIGNAL(activated()), MainWindow, SLOT(FileSave()));
        QObject::connect(pushButtonRun, SIGNAL(clicked()), MainWindow, SLOT(RunCommand()));
        QObject::connect(actionSettings, SIGNAL(activated()), MainWindow, SLOT(EditSettings()));
        QObject::connect(actionAbout, SIGNAL(activated()), MainWindow, SLOT(LaunchAbout()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Visual Command", 0, QApplication::UnicodeUTF8));
        actionRunMode->setText(QApplication::translate("MainWindow", "RunMode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRunMode->setToolTip(QApplication::translate("MainWindow", "Switches to Run Mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRunMode->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionEdit_Mode->setText(QApplication::translate("MainWindow", "Edit Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit_Mode->setToolTip(QApplication::translate("MainWindow", "Switches to Edit Mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEdit_Mode->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionSearch->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSearch->setToolTip(QApplication::translate("MainWindow", "Search for a script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSearch->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionUpload_GUI->setText(QApplication::translate("MainWindow", "Upload GUI", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUpload_GUI->setToolTip(QApplication::translate("MainWindow", "Uploads the current GUI", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUpload_GUI->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        actionAdd_Tab->setText(QApplication::translate("MainWindow", "Add Tab", 0, QApplication::UnicodeUTF8));
        actionAdd_Tab->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save As", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save a hardcopy of this script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Default", 0, QApplication::UnicodeUTF8));
        pushButtonRun->setText(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
        plainTextEditArgumentText->setPlainText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        toolBarEdit->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
