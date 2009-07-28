/********************************************************************************
** Form generated from reading ui file 'dialogupload.ui'
**
** Created: Tue Jul 28 15:30:25 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOGUPLOAD_H
#define UI_DIALOGUPLOAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogUpload
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *plainTextEditTitle;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *plainTextEditApplication;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *plainTextEditWebsite;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QPlainTextEdit *plainTextEditTags;
    QListWidget *listWidget;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *textEditDescription;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxMac;
    QCheckBox *checkBoxLinux;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogUpload)
    {
        if (DialogUpload->objectName().isEmpty())
            DialogUpload->setObjectName(QString::fromUtf8("DialogUpload"));
        DialogUpload->resize(336, 679);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_30.png")), QIcon::Normal, QIcon::Off);
        DialogUpload->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(DialogUpload);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(DialogUpload);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 60));
        groupBox_3->setMaximumSize(QSize(16777215, 60));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        plainTextEditTitle = new QPlainTextEdit(groupBox_3);
        plainTextEditTitle->setObjectName(QString::fromUtf8("plainTextEditTitle"));

        verticalLayout_5->addWidget(plainTextEditTitle);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(DialogUpload);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 60));
        groupBox_4->setMaximumSize(QSize(16777215, 60));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        plainTextEditApplication = new QPlainTextEdit(groupBox_4);
        plainTextEditApplication->setObjectName(QString::fromUtf8("plainTextEditApplication"));

        verticalLayout_3->addWidget(plainTextEditApplication);

        plainTextEditApplication->raise();
        groupBox_3->raise();

        verticalLayout_2->addWidget(groupBox_4);

        groupBox_6 = new QGroupBox(DialogUpload);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(0, 60));
        groupBox_6->setMaximumSize(QSize(16777215, 60));
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        plainTextEditWebsite = new QPlainTextEdit(groupBox_6);
        plainTextEditWebsite->setObjectName(QString::fromUtf8("plainTextEditWebsite"));

        verticalLayout_4->addWidget(plainTextEditWebsite);


        verticalLayout_2->addWidget(groupBox_6);

        groupBox_2 = new QGroupBox(DialogUpload);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 150));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout->addWidget(label_4);

        plainTextEditTags = new QPlainTextEdit(groupBox_2);
        plainTextEditTags->setObjectName(QString::fromUtf8("plainTextEditTags"));
        plainTextEditTags->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(plainTextEditTags);


        horizontalLayout->addLayout(verticalLayout);

        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        verticalLayout_6->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(DialogUpload);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMaximumSize(QSize(16777215, 150));
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        textEditDescription = new QTextEdit(groupBox_5);
        textEditDescription->setObjectName(QString::fromUtf8("textEditDescription"));

        verticalLayout_7->addWidget(textEditDescription);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox = new QGroupBox(DialogUpload);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 60));
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


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(DialogUpload);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(plainTextEditTitle, plainTextEditApplication);
        QWidget::setTabOrder(plainTextEditApplication, plainTextEditTags);
        QWidget::setTabOrder(plainTextEditTags, listWidget);
        QWidget::setTabOrder(listWidget, textEditDescription);
        QWidget::setTabOrder(textEditDescription, checkBoxWindows);
        QWidget::setTabOrder(checkBoxWindows, checkBoxMac);
        QWidget::setTabOrder(checkBoxMac, checkBoxLinux);
        QWidget::setTabOrder(checkBoxLinux, buttonBox);

        retranslateUi(DialogUpload);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogUpload, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogUpload, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogUpload);
    } // setupUi

    void retranslateUi(QDialog *DialogUpload)
    {
        DialogUpload->setWindowTitle(QApplication::translate("DialogUpload", "Upload GUI", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("DialogUpload", "GUI Title", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("DialogUpload", "Console / Terminal Application Name", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("DialogUpload", "Website", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DialogUpload", "Tags - Used for searches", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogUpload", "Press enter after each tag is entered in the below box", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("DialogUpload", "Description - A brief description of its use", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogUpload", "Operating Systems", 0, QApplication::UnicodeUTF8));
        checkBoxWindows->setText(QApplication::translate("DialogUpload", "Windows", 0, QApplication::UnicodeUTF8));
        checkBoxMac->setText(QApplication::translate("DialogUpload", "Mac", 0, QApplication::UnicodeUTF8));
        checkBoxLinux->setText(QApplication::translate("DialogUpload", "Linux", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogUpload);
    } // retranslateUi

};

namespace Ui {
    class DialogUpload: public Ui_DialogUpload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUPLOAD_H
