#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogSettings;
}

class DialogSettings : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogSettings)
public:
    explicit DialogSettings(QWidget *parent = 0);
    virtual ~DialogSettings();

protected:
    virtual void changeEvent(QEvent *e);

public:
    Ui::DialogSettings *m_ui;

public slots:
    void UpdateSettings();
};

#endif // DIALOGSETTINGS_H
