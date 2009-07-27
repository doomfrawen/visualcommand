#ifndef ARGUMENTINTERFACE_H
#define ARGUMENTINTERFACE_H

/*
 * Copyright (c) 2006-2007, Sam Price
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright notice,
 *       this list of conditions and the following disclaimer in the documentation
 *       and/or other materials provided with the distribution.
 *     * Neither the name of APress nor the names of its contributors
 *       may be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <QString>
#include <QtXml>
class ArgumentInterface: public QWidget
{
public:
    virtual QDomElement GetXMLElment(QDomDocument* doc)=0;
    virtual void SetEditMode()=0;
    virtual void SetRunMode()=0;
    virtual void SwapController(QWidget *NewController)=0;
    virtual void SetupBrowser(QtTreePropertyBrowser* browser)=0;
    virtual QString GetArgumentText(QString Input="")=0;
    virtual void SetArgumentFormat(QString Format)=0;
    virtual QString GetName()=0;
    virtual ArgumentInterface* GetNewInstance()=0;
    virtual ArgumentInterface* GetNewInstance(QDomElement& Element)=0;
    virtual void LoadXMLInfo(QDomElement& Element)=0;

signals:
    virtual void MoveUpOneSignal()=0;
    virtual void MoveDownOneSignal()=0;
    virtual void ControlChanged()=0;
    virtual void ControlSelected(ArgumentInterface* Control)=0;
    virtual void DeleteMe()=0;
};

//Q_DECLARE_INTERFACE( ArgumentInterface, "se.thelins.CustomPlugin.ArgumentInterface/0.1" )



#endif // ARGUMENTINTERFACE_H
