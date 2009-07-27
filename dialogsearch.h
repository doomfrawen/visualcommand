#ifndef DIALOGSEARCH_H
#define DIALOGSEARCH_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogSearch;
}

class DialogSearch : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogSearch)
public:
    explicit DialogSearch(QWidget *parent = 0);
    virtual ~DialogSearch();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogSearch *m_ui;
};

#endif // DIALOGSEARCH_H
