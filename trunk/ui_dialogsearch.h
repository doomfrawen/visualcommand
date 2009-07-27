/********************************************************************************
** Form generated from reading ui file 'dialogsearch.ui'
**
** Created: Tue Jul 21 01:48:33 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOGSEARCH_H
#define UI_DIALOGSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSearch
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEditSearch;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxWhere;
    QFormLayout *formLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBoxAppName;
    QCheckBox *checkBoxTags;
    QCheckBox *checkBoxDescription;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxMac;
    QCheckBox *checkBoxLinux;
    QPushButton *pushButtonSearch;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogSearch)
    {
        if (DialogSearch->objectName().isEmpty())
            DialogSearch->setObjectName(QString::fromUtf8("DialogSearch"));
        DialogSearch->resize(614, 373);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_02.png")), QIcon::Normal, QIcon::Off);
        DialogSearch->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogSearch);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalFrame = new QFrame(DialogSearch);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(horizontalFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(label);

        textEditSearch = new QTextEdit(horizontalFrame);
        textEditSearch->setObjectName(QString::fromUtf8("textEditSearch"));
        textEditSearch->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(textEditSearch);


        verticalLayout->addWidget(horizontalFrame);

        horizontalFrame_2 = new QFrame(DialogSearch);
        horizontalFrame_2->setObjectName(QString::fromUtf8("horizontalFrame_2"));
        horizontalFrame_2->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        groupBoxWhere = new QGroupBox(horizontalFrame_2);
        groupBoxWhere->setObjectName(QString::fromUtf8("groupBoxWhere"));
        formLayout = new QFormLayout(groupBoxWhere);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        checkBox = new QCheckBox(groupBoxWhere);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, checkBox);

        checkBoxAppName = new QCheckBox(groupBoxWhere);
        checkBoxAppName->setObjectName(QString::fromUtf8("checkBoxAppName"));
        checkBoxAppName->setChecked(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, checkBoxAppName);

        checkBoxTags = new QCheckBox(groupBoxWhere);
        checkBoxTags->setObjectName(QString::fromUtf8("checkBoxTags"));
        checkBoxTags->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBoxTags);

        checkBoxDescription = new QCheckBox(groupBoxWhere);
        checkBoxDescription->setObjectName(QString::fromUtf8("checkBoxDescription"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkBoxDescription);


        horizontalLayout_3->addWidget(groupBoxWhere);

        groupBox = new QGroupBox(horizontalFrame_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxWindows = new QCheckBox(groupBox);
        checkBoxWindows->setObjectName(QString::fromUtf8("checkBoxWindows"));
        checkBoxWindows->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxWindows);

        checkBoxMac = new QCheckBox(groupBox);
        checkBoxMac->setObjectName(QString::fromUtf8("checkBoxMac"));
        checkBoxMac->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxMac);

        checkBoxLinux = new QCheckBox(groupBox);
        checkBoxLinux->setObjectName(QString::fromUtf8("checkBoxLinux"));
        checkBoxLinux->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxLinux);


        horizontalLayout_3->addWidget(groupBox);

        pushButtonSearch = new QPushButton(horizontalFrame_2);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));
        pushButtonSearch->setIcon(icon);
        pushButtonSearch->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButtonSearch);


        verticalLayout->addWidget(horizontalFrame_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        tableWidget = new QTableWidget(DialogSearch);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_5->addWidget(tableWidget);

        textEdit = new QTextEdit(DialogSearch);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout_5->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(DialogSearch);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_34.png")), QIcon::Normal, QIcon::Off);
        pushButtonOk->setIcon(icon1);
        pushButtonOk->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButtonOk);

        pushButtonCancel = new QPushButton(DialogSearch);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_35.png")), QIcon::Normal, QIcon::Off);
        pushButtonCancel->setIcon(icon2);
        pushButtonCancel->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(DialogSearch);

        QMetaObject::connectSlotsByName(DialogSearch);
    } // setupUi

    void retranslateUi(QDialog *DialogSearch)
    {
        DialogSearch->setWindowTitle(QApplication::translate("DialogSearch", "Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogSearch", "Search:", 0, QApplication::UnicodeUTF8));
        groupBoxWhere->setTitle(QApplication::translate("DialogSearch", "Search In", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("DialogSearch", "Script Title", 0, QApplication::UnicodeUTF8));
        checkBoxAppName->setText(QApplication::translate("DialogSearch", "Application Name", 0, QApplication::UnicodeUTF8));
        checkBoxTags->setText(QApplication::translate("DialogSearch", "Tags", 0, QApplication::UnicodeUTF8));
        checkBoxDescription->setText(QApplication::translate("DialogSearch", "Description", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogSearch", "Operating System", 0, QApplication::UnicodeUTF8));
        checkBoxWindows->setText(QApplication::translate("DialogSearch", "Windows", 0, QApplication::UnicodeUTF8));
        checkBoxMac->setText(QApplication::translate("DialogSearch", "Mac", 0, QApplication::UnicodeUTF8));
        checkBoxLinux->setText(QApplication::translate("DialogSearch", "Linux", 0, QApplication::UnicodeUTF8));
        pushButtonSearch->setText(QApplication::translate("DialogSearch", "Search", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogSearch", "Script Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogSearch", "Application", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogSearch", "Popularity", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("DialogSearch", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Description Text</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("DialogSearch", "Ok", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("DialogSearch", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogSearch);
    } // retranslateUi

};

namespace Ui {
    class DialogSearch: public Ui_DialogSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSEARCH_H
