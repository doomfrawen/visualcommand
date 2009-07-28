/********************************************************************************
** Form generated from reading ui file 'argbase.ui'
**
** Created: Tue Jul 28 15:30:25 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ARGBASE_H
#define UI_ARGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArgBase
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxFormat;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frameEnabled;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxEnabled;
    QWidget *widgetControl;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowserDescription;
    QFrame *frameUpDownDelete;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonMoveUp;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonDeleteMe;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonMoveDown;

    void setupUi(QWidget *ArgBase)
    {
        if (ArgBase->objectName().isEmpty())
            ArgBase->setObjectName(QString::fromUtf8("ArgBase"));
        ArgBase->setEnabled(true);
        ArgBase->resize(243, 166);
        ArgBase->setMouseTracking(false);
        ArgBase->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(ArgBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBoxFormat = new QGroupBox(ArgBase);
        groupBoxFormat->setObjectName(QString::fromUtf8("groupBoxFormat"));
        horizontalLayout_4 = new QHBoxLayout(groupBoxFormat);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frameEnabled = new QFrame(groupBoxFormat);
        frameEnabled->setObjectName(QString::fromUtf8("frameEnabled"));
        frameEnabled->setMaximumSize(QSize(40, 16777215));
        frameEnabled->setFrameShape(QFrame::NoFrame);
        frameEnabled->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameEnabled);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxEnabled = new QCheckBox(frameEnabled);
        checkBoxEnabled->setObjectName(QString::fromUtf8("checkBoxEnabled"));

        verticalLayout_2->addWidget(checkBoxEnabled);


        horizontalLayout_3->addWidget(frameEnabled);

        widgetControl = new QWidget(groupBoxFormat);
        widgetControl->setObjectName(QString::fromUtf8("widgetControl"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetControl->sizePolicy().hasHeightForWidth());
        widgetControl->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(widgetControl);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        textBrowserDescription = new QTextBrowser(groupBoxFormat);
        textBrowserDescription->setObjectName(QString::fromUtf8("textBrowserDescription"));
        textBrowserDescription->setReadOnly(false);

        horizontalLayout_4->addWidget(textBrowserDescription);


        horizontalLayout->addWidget(groupBoxFormat);

        frameUpDownDelete = new QFrame(ArgBase);
        frameUpDownDelete->setObjectName(QString::fromUtf8("frameUpDownDelete"));
        frameUpDownDelete->setEnabled(true);
        frameUpDownDelete->setMaximumSize(QSize(60, 16777215));
        frameUpDownDelete->setFrameShape(QFrame::StyledPanel);
        frameUpDownDelete->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frameUpDownDelete);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonMoveUp = new QPushButton(frameUpDownDelete);
        pushButtonMoveUp->setObjectName(QString::fromUtf8("pushButtonMoveUp"));
        pushButtonMoveUp->setMinimumSize(QSize(0, 0));
        pushButtonMoveUp->setMaximumSize(QSize(30, 16777215));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_30.png")), QIcon::Normal, QIcon::Off);
        pushButtonMoveUp->setIcon(icon);

        verticalLayout->addWidget(pushButtonMoveUp);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonDeleteMe = new QPushButton(frameUpDownDelete);
        pushButtonDeleteMe->setObjectName(QString::fromUtf8("pushButtonDeleteMe"));
        pushButtonDeleteMe->setMaximumSize(QSize(30, 16777215));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_33.png")), QIcon::Normal, QIcon::Off);
        pushButtonDeleteMe->setIcon(icon1);

        verticalLayout->addWidget(pushButtonDeleteMe);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButtonMoveDown = new QPushButton(frameUpDownDelete);
        pushButtonMoveDown->setObjectName(QString::fromUtf8("pushButtonMoveDown"));
        pushButtonMoveDown->setMaximumSize(QSize(30, 16777215));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/PNG/onebit_28.png")), QIcon::Normal, QIcon::Off);
        pushButtonMoveDown->setIcon(icon2);

        verticalLayout->addWidget(pushButtonMoveDown);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(frameUpDownDelete);


        retranslateUi(ArgBase);
        QObject::connect(checkBoxEnabled, SIGNAL(clicked(bool)), ArgBase, SLOT(EnabledClicked(bool)));
        QObject::connect(pushButtonMoveUp, SIGNAL(clicked()), ArgBase, SLOT(MoveUpOne()));
        QObject::connect(pushButtonMoveDown, SIGNAL(clicked()), ArgBase, SLOT(MoveDownOne()));

        QMetaObject::connectSlotsByName(ArgBase);
    } // setupUi

    void retranslateUi(QWidget *ArgBase)
    {
        ArgBase->setWindowTitle(QApplication::translate("ArgBase", "Form", 0, QApplication::UnicodeUTF8));
        groupBoxFormat->setTitle(QApplication::translate("ArgBase", "GroupBox", 0, QApplication::UnicodeUTF8));
        checkBoxEnabled->setText(QString());
        pushButtonMoveUp->setText(QString());
        pushButtonDeleteMe->setText(QString());
        pushButtonMoveDown->setText(QString());
        Q_UNUSED(ArgBase);
    } // retranslateUi

};

namespace Ui {
    class ArgBase: public Ui_ArgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARGBASE_H
