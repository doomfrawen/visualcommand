/********************************************************************************
** Form generated from reading ui file 'Searchdialog.ui'
**
** Created: Thu Jun 11 20:31:21 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxMac;
    QCheckBox *checkBoxLinux;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEditSearch;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOk;
    QGroupBox *groupBoxWhere;
    QFormLayout *formLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBoxAppName;
    QCheckBox *checkBoxTags;
    QCheckBox *checkBoxDescription;
    QTextEdit *textEdit;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(615, 435);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 193, 81));
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

        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 591, 32));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textEditSearch = new QTextEdit(horizontalLayoutWidget);
        textEditSearch->setObjectName(QString::fromUtf8("textEditSearch"));
        textEditSearch->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(textEditSearch);

        pushButtonSearch = new QPushButton(Dialog);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));
        pushButtonSearch->setGeometry(QRect(440, 70, 161, 71));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_02.png")), QIcon::Normal, QIcon::Off);
        pushButtonSearch->setIcon(icon);
        pushButtonSearch->setIconSize(QSize(32, 32));
        pushButtonCancel = new QPushButton(Dialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(500, 380, 101, 41));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_35.png")), QIcon::Normal, QIcon::Off);
        pushButtonCancel->setIcon(icon1);
        pushButtonCancel->setIconSize(QSize(32, 32));
        pushButtonOk = new QPushButton(Dialog);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(400, 380, 91, 41));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_34.png")), QIcon::Normal, QIcon::Off);
        pushButtonOk->setIcon(icon2);
        pushButtonOk->setIconSize(QSize(32, 32));
        groupBoxWhere = new QGroupBox(Dialog);
        groupBoxWhere->setObjectName(QString::fromUtf8("groupBoxWhere"));
        groupBoxWhere->setGeometry(QRect(220, 60, 208, 81));
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

        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(330, 160, 271, 211));
        tableWidget = new QTableWidget(Dialog);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 160, 311, 211));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "Operating System", 0, QApplication::UnicodeUTF8));
        checkBoxWindows->setText(QApplication::translate("Dialog", "Windows", 0, QApplication::UnicodeUTF8));
        checkBoxMac->setText(QApplication::translate("Dialog", "Mac", 0, QApplication::UnicodeUTF8));
        checkBoxLinux->setText(QApplication::translate("Dialog", "Linux", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Search:", 0, QApplication::UnicodeUTF8));
        pushButtonSearch->setText(QApplication::translate("Dialog", "Search", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("Dialog", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("Dialog", "Ok", 0, QApplication::UnicodeUTF8));
        groupBoxWhere->setTitle(QApplication::translate("Dialog", "Search In", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Dialog", "Script Title", 0, QApplication::UnicodeUTF8));
        checkBoxAppName->setText(QApplication::translate("Dialog", "Application Name", 0, QApplication::UnicodeUTF8));
        checkBoxTags->setText(QApplication::translate("Dialog", "Tags", 0, QApplication::UnicodeUTF8));
        checkBoxDescription->setText(QApplication::translate("Dialog", "Description", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Description Text</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog", "Script Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog", "Application", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Dialog", "Popularity", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
