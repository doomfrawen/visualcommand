#include "argtab.h"
#include <list>
argTab::argTab(QString Nam):QWidget()
{

        this->setObjectName(QString::fromUtf8("DynamicTab"));
        horizontalLayout_3 = new QHBoxLayout(this);
        scrollArea = new QScrollArea(this);
        scrollAreaWidgetContents_2 = new QWidget();

        this->Name = Nam;
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setMargin(11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);

        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 384, 223));

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_3->addWidget(scrollArea);

        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        //QObject::connect(verticalLayout
}
void argTab::AddWidget(ArgumentInterface* temp){
    //temp->setObjectName(QString::fromUtf8("textEdit_3"));

    QObject::connect(temp, SIGNAL(MoveUpOneSignal()), this, SLOT(MoveUp()));
    QObject::connect(temp, SIGNAL(MoveDownOneSignal()), this, SLOT(MoveDown()));
    //When text needs to be changed
    QObject::connect(temp, SIGNAL(ControlChanged()),this,SIGNAL(ControlChanged()));
    QObject::connect(temp, SIGNAL(ControlSelected(ArgumentInterface* )),this,SIGNAL(ControlSelected( ArgumentInterface*)));
    QObject::connect(temp, SIGNAL(DeleteMe()),this,SLOT(DeleteArgument()));
    verticalLayout->addWidget(temp);
    items.push_back(temp);


}
argTab::~argTab(){


        delete scrollArea;
        //TODO Fix Memory Leak here
        //delete scrollAreaWidgetContents_2 ;

        delete horizontalLayout_3;
}
void argTab::setEditMode(){
    for(int x =0;x<items.size();++x)
        items.at(x)->SetEditMode();

}
void argTab::setRunMode(){
    for(int x =0;x<items.size();++x)
        items.at(x)->SetRunMode();

}
void argTab::MoveUp(){
    ArgumentInterface* control = dynamic_cast<ArgumentInterface*>( QObject::sender());
    int x = verticalLayout->indexOf(control);

    if(x >0){
        items.move(x,x-1);
        verticalLayout->removeWidget(control);
        verticalLayout->insertWidget(--x,control);
        emit ControlChanged();
    }

}
void argTab::MoveDown(){
    ArgumentInterface* control = dynamic_cast<ArgumentInterface*>( QObject::sender());
    int x = verticalLayout->indexOf(control);

    if(x< verticalLayout->count()-1){
        items.move(x,x+1);
        verticalLayout->removeWidget(control);
        verticalLayout->insertWidget(++x,control);
        emit ControlChanged();
    }


}
QString argTab::GetArgumentText(){
    QString Argument = "";

    for(int x =0;x<items.size();++x)
        Argument += items.at(x)->GetArgumentText();

    return Argument;
}
QDomElement argTab::GetXMLElment(QDomDocument* doc){
    QDomElement XMLTag = doc->createElement("Container");
    XMLTag.setAttribute("Type","Tab");
    XMLTag.setAttribute("Name",Name);
    for(int x =0;x<items.size();++x){
        QDomElement arg = items.at(x)->GetXMLElment(doc);
        XMLTag.appendChild(arg);
    }
    return XMLTag;
}
void argTab::AddWidgets(QDomElement root,QMap<QString, ArgumentInterface*> &Arguments){
    QDomNode n = root.firstChild();
    while(!n.isNull()){
        QDomElement e = n.toElement();
        if(!e.isNull()){

            ArgumentInterface* Arg = Arguments[e.tagName()];
            this->AddWidget(Arg->GetNewInstance(e));

        }
        n=n.nextSibling();
    }
}
 void argTab::DeleteArgument(){
    QObject * arg = QObject::sender();
    ArgumentInterface * temp = dynamic_cast<ArgumentInterface *>(arg);
    items.removeOne(temp);
    delete temp;
    emit ControlChanged();
 }
