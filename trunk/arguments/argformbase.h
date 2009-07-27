#ifndef ARGFORMBASE_H
#define ARGFORMBASE_H

#include "argbase.h"
#include "argforminterface.h"
class ArgFormBase : public ArgBase
{
public:
    ArgFormBase(ArgFormInterface *ArgForm);

    void SetEditMode();
    void SetRunMode();

    void SetupBrowser(QtTreePropertyBrowser* browser);
    QString GetArgumentText(QString Input="");

    QString GetName();
    ArgumentInterface* GetNewInstance();
    ArgumentInterface* GetNewInstance(QDomElement& Element);
    void LoadXMLInfo(QDomElement& Element);
    QDomElement GetXMLElment(QDomDocument* doc);
protected:
    ArgFormInterface* ArgForm;
};

#endif // ARGFORMBASE_H
