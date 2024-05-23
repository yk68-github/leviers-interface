/***************************************************************
 * Name:      Leviers_InterfaceApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Y ()
 * Created:   2024-05-23
 * Copyright: Y ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Leviers_InterfaceApp.h"

//(*AppHeaders
#include "Leviers_InterfaceMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Leviers_InterfaceApp);

bool Leviers_InterfaceApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Leviers_InterfaceFrame* Frame = new Leviers_InterfaceFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
