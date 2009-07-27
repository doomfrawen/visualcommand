#ifndef DIALOGUPLOAD_H
#define DIALOGUPLOAD_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogUpload;
}

class DialogUpload : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogUpload)
public:
    explicit DialogUpload(QWidget *parent = 0);
    virtual ~DialogUpload();
    void setTitle(QString);
    void setAppName(QString);
    void setAppWebsite(QString);
    void setDescription(QString);
    void setWindows(bool);
    void setLinux(bool);
    void setMac(bool);

    QString getTitle();
    QString getAppName();
    QString getAppWebsite();
    QString getDescription();
    QList<QString> getTags();
    bool getWindows();
    bool getLinux();
    bool getMac();
protected:
    virtual void changeEvent(QEvent *e);

public:
    Ui::DialogUpload *m_ui;
};

#endif // DIALOGUPLOAD_H
