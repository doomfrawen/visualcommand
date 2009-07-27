#include "dialogsearch.h"
#include "ui_dialogsearch.h"

DialogSearch::DialogSearch(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogSearch)
{
    m_ui->setupUi(this);
}

DialogSearch::~DialogSearch()
{
    delete m_ui;
}

void DialogSearch::changeEvent(QEvent *e)
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
