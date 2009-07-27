/********************************************************************************
** Form generated from reading ui file 'argfileform.ui'
**
** Created: Thu Jul 23 20:57:39 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ARGFILEFORM_H
#define UI_ARGFILEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArgFileForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButtonRemoveSelected;
    QListWidget *listWidget;

    void setupUi(QWidget *ArgFileForm)
    {
        if (ArgFileForm->objectName().isEmpty())
            ArgFileForm->setObjectName(QString::fromUtf8("ArgFileForm"));
        verticalLayout_2 = new QVBoxLayout(ArgFileForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(ArgFileForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButtonRemoveSelected = new QPushButton(ArgFileForm);
        pushButtonRemoveSelected->setObjectName(QString::fromUtf8("pushButtonRemoveSelected"));

        horizontalLayout->addWidget(pushButtonRemoveSelected);


        verticalLayout_2->addLayout(horizontalLayout);

        listWidget = new QListWidget(ArgFileForm);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(16777215, 75));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_2->addWidget(listWidget);


        retranslateUi(ArgFileForm);
        QObject::connect(pushButton, SIGNAL(clicked()), ArgFileForm, SLOT(fileButtonPressed()));
        QObject::connect(pushButtonRemoveSelected, SIGNAL(clicked()), ArgFileForm, SLOT(RemoveSelected()));

        QMetaObject::connectSlotsByName(ArgFileForm);
    } // setupUi

    void retranslateUi(QWidget *ArgFileForm)
    {
        ArgFileForm->setWindowTitle(QApplication::translate("ArgFileForm", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ArgFileForm", "Open File", 0, QApplication::UnicodeUTF8));
        pushButtonRemoveSelected->setText(QApplication::translate("ArgFileForm", "Remove Selected", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ArgFileForm);
    } // retranslateUi

};

namespace Ui {
    class ArgFileForm: public Ui_ArgFileForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARGFILEFORM_H
