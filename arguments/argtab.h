#ifndef ARGTAB_H
#define ARGTAB_H

#include <QtGui/QWidget>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QList>

#include "qttreepropertybrowser.h"
#include "argumentinterface.h"
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>

class argTab:public QWidget
{
    Q_OBJECT
    //Q_DISABLE_COPY(argTab)
public:
    argTab(QString Name);
    ~argTab();
    void AddWidget(ArgumentInterface* Argument);
    void setRunMode();
    void setEditMode();
    QString Name;
    QString GetArgumentText();
    QDomElement GetXMLElment(QDomDocument *Doc);
    void AddWidgets(QDomElement el,QMap<QString, ArgumentInterface*> &Arguments);
signals:
    void ControlChanged();
    void ControlSelected(ArgumentInterface * Control);
public slots:
    void MoveUp();
    void MoveDown();
    void DeleteArgument();


protected:
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QList<ArgumentInterface*> items;


};

#endif // ARGTAB_H
