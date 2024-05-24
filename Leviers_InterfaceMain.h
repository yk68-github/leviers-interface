/***************************************************************
 * Name:      Leviers_InterfaceMain.h
 * Purpose:   Defines Application Frame
 * Author:    Y ()
 * Created:   2024-05-23
 * Copyright: Y ()
 * License:
 **************************************************************/

#ifndef LEVIERS_INTERFACEMAIN_H
#define LEVIERS_INTERFACEMAIN_H

//(*Headers(Leviers_InterfaceFrame)
#include <wx/button.h>
#include <wx/filedlg.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

#include <wx/log.h>
#include <wx/wfstream.h>
#include <wx/validate.h>
#include <wx/textfile.h>
#include <bitset>
#include <list>


class Leviers_InterfaceFrame: public wxFrame
{
    public:

        Leviers_InterfaceFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Leviers_InterfaceFrame();

    private:

        //(*Handlers(Leviers_InterfaceFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButtonOuvrirFichierCalquesClick(wxCommandEvent& event);
        void OnRadioEncodageSelect(wxCommandEvent& event);
        void OnButtonExecuterClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(Leviers_InterfaceFrame)
        static const long wxID_STATICTEXTTailleObjectif;
        static const long wxD_SPINCTRLTailleObjectif;
        static const long ID_STATICTEXT1;
        static const long wxID_RADIOBOX1;
        static const long wxID_TEXTCTRLObjectif;
        static const long wxID_BUTTON1;
        static const long ID_BUTTON1;
        static const long wxID_STATICTEXTResultat;
        static const long ID_PANEL1;
        static const long wxidMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Leviers_InterfaceFrame)
        wxBoxSizer* SizerPrincipal;
        wxButton* ButtonExecuter;
        wxButton* ButtonOuvrirFichierCalques;
        wxFileDialog* FileDialogCalques;
        wxMenu* MenuAide;
        wxMenu* MenuFichiers;
        wxMenuBar* MenuBar1;
        wxMenuItem* MenuItemAPropos;
        wxMenuItem* MenuItemFermer;
        wxPanel* Panel1;
        wxRadioBox* RadioEncodage;
        wxSpinCtrl* SpinCtrlTailleObjectif;
        wxStaticText* StaticText1;
        wxStaticText* StaticTextResultat;
        wxStaticText* StaticTextTailleObjectif;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrlObjectif;
        //*)

        wxTextValidator *DecValidator = nullptr;
        wxTextValidator *BinValidator = nullptr;

        wxString m_String_TailleObjectif = {};

        int m_TailleObjectif = 0;
        int m_Objectif = 0;

        wxString BinToDec(const wxString);
        wxString DecToBin(const wxString);
        std::list<std::bitset<32>> lst;

        DECLARE_EVENT_TABLE()
};

#endif // LEVIERS_INTERFACEMAIN_H
