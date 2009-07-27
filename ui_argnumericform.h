/********************************************************************************
** Form generated from reading ui file 'argnumericform.ui'
**
** Created: Tue Jul 21 01:48:33 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ARGNUMERICFORM_H
#define UI_ARGNUMERICFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArgNumericForm
{
public:
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;

    void setupUi(QWidget *ArgNumericForm)
    {
        if (ArgNumericForm->objectName().isEmpty())
            ArgNumericForm->setObjectName(QString::fromUtf8("ArgNumericForm"));
        ArgNumericForm->resize(400, 69);
        verticalLayout = new QVBoxLayout(ArgNumericForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSlider = new QSlider(ArgNumericForm);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(ArgNumericForm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);


        retranslateUi(ArgNumericForm);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), ArgNumericForm, SLOT(SliderChanged(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), ArgNumericForm, SLOT(UpDownChanged(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), ArgNumericForm, SLOT(ControlChanged()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), ArgNumericForm, SLOT(ControlChanged()));

        QMetaObject::connectSlotsByName(ArgNumericForm);
    } // setupUi

    void retranslateUi(QWidget *ArgNumericForm)
    {
        ArgNumericForm->setWindowTitle(QApplication::translate("ArgNumericForm", "Form", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ArgNumericForm);
    } // retranslateUi

};

namespace Ui {
    class ArgNumericForm: public Ui_ArgNumericForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARGNUMERICFORM_H
