#ifndef ARGFORMINTERFACE_H
#define ARGFORMINTERFACE_H


#include <QtXml>
#include <QtTreePropertyBrowser>



class ArgFormInterface:public QWidget
{
public:
    // Used for saving
    virtual QDomElement GetXMLElment(QDomElement* doc)=0;
    //Used for loading
    virtual void LoadXMLInfo(QDomElement& Element)=0;
    //Used if the control will change when in edit mode
    void SetEditMode(){}
    void SetRunMode(){}
    //Setup the property browser
    virtual void SetupBrowser(QtTreePropertyBrowser* browser)=0;
    virtual ArgFormInterface * GetNewInstance()=0;
    virtual ArgFormInterface *  GetNewInstance(QDomElement& Element)=0;
    virtual QString GetFormName()=0;
    virtual QString GetInitalFormat()=0;
    virtual QString GetStringValue(QString Format )=0;
signals:
    virtual void ControlChanged()=0;
};

#endif // ARGFORMINTERFACE_H
