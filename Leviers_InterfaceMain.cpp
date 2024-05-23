/***************************************************************
 * Name:      Leviers_InterfaceMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Y ()
 * Created:   2024-05-23
 * Copyright: Y ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Leviers_InterfaceMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Leviers_InterfaceFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Leviers_InterfaceFrame)
const long Leviers_InterfaceFrame::wxID_STATICTEXTTailleObjectif = wxNewId();
const long Leviers_InterfaceFrame::wxD_SPINCTRLTailleObjectif = wxNewId();
const long Leviers_InterfaceFrame::ID_STATICTEXT1 = wxNewId();
const long Leviers_InterfaceFrame::wxID_RADIOBOX1 = wxNewId();
const long Leviers_InterfaceFrame::wxID_TEXTCTRLObjectif = wxNewId();
const long Leviers_InterfaceFrame::wxID_BUTTON1 = wxNewId();
const long Leviers_InterfaceFrame::ID_STATICTEXT2 = wxNewId();
const long Leviers_InterfaceFrame::ID_PANEL1 = wxNewId();
const long Leviers_InterfaceFrame::wxidMenuQuit = wxNewId();
const long Leviers_InterfaceFrame::idMenuAbout = wxNewId();
const long Leviers_InterfaceFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Leviers_InterfaceFrame,wxFrame)
    //(*EventTable(Leviers_InterfaceFrame)
    //*)
END_EVENT_TABLE()

Leviers_InterfaceFrame::Leviers_InterfaceFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Leviers_InterfaceFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizerObjectif;
    wxStaticBoxSizer* StaticBoxSizer1;

    Create(parent, id, _("Gestion des leviers"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(800,600));
    SetMinSize(wxSize(800,600));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("E:\\code\\0137\\Leviers_Interface\\lever_39043.ico"))));
    	SetIcon(FrameIcon);
    }
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(336,368), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    SizerPrincipal = new wxBoxSizer(wxVERTICAL);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticTextTailleObjectif = new wxStaticText(Panel1, wxID_STATICTEXTTailleObjectif, _("Taille de l\'objectif : "), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_STATICTEXTTailleObjectif"));
    BoxSizer1->Add(StaticTextTailleObjectif, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SpinCtrlTailleObjectif = new wxSpinCtrl(Panel1, wxD_SPINCTRLTailleObjectif, _T("8"), wxDefaultPosition, wxDefaultSize, 0, 8, 16, 8, _T("wxD_SPINCTRLTailleObjectif"));
    SpinCtrlTailleObjectif->SetValue(_T("8"));
    BoxSizer1->Add(SpinCtrlTailleObjectif, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SizerPrincipal->Add(BoxSizer1, 1, wxALL|wxEXPAND, 5);
    BoxSizerObjectif = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Objectif : "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    BoxSizerObjectif->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wxString __wxRadioBoxChoices_1[2] =
    {
    	_("Décimal"),
    	_("Binaire")
    };
    RadioEncodage = new wxRadioBox(Panel1, wxID_RADIOBOX1, _("Encodage"), wxDefaultPosition, wxDefaultSize, 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("wxID_RADIOBOX1"));
    RadioEncodage->SetSelection(0);
    BoxSizerObjectif->Add(RadioEncodage, 4, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlObjectif = new wxTextCtrl(Panel1, wxID_TEXTCTRLObjectif, _("0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_TEXTCTRLObjectif"));
    BoxSizerObjectif->Add(TextCtrlObjectif, 12, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SizerPrincipal->Add(BoxSizerObjectif, 1, wxALL|wxEXPAND, 5);
    ButtonOuvrirFichierCalques = new wxButton(Panel1, wxID_BUTTON1, _("Ouvrir un fichier de calques"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_BUTTON1"));
    ButtonOuvrirFichierCalques->SetDefault();
    SizerPrincipal->Add(ButtonOuvrirFichierCalques, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Résultat"));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticBoxSizer1->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
    SizerPrincipal->Add(StaticBoxSizer1, 6, wxALL|wxEXPAND, 5);
    Panel1->SetSizer(SizerPrincipal);
    SizerPrincipal->Fit(Panel1);
    SizerPrincipal->SetSizeHints(Panel1);
    MenuBar1 = new wxMenuBar();
    MenuFichiers = new wxMenu();
    MenuItemFermer = new wxMenuItem(MenuFichiers, wxidMenuQuit, _("Quitter\tAlt-F4"), _("Fermer l\'application"), wxITEM_NORMAL);
    MenuFichiers->Append(MenuItemFermer);
    MenuBar1->Append(MenuFichiers, _("&Fichiers"));
    MenuAide = new wxMenu();
    MenuItemAPropos = new wxMenuItem(MenuAide, idMenuAbout, _("A propos...\tF1"), _("Informations à propos de l\'application"), wxITEM_NORMAL);
    MenuAide->Append(MenuItemAPropos);
    MenuBar1->Append(MenuAide, _("Aide"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    FileDialogCalques = new wxFileDialog(this, _("Choisir le fichier"), wxEmptyString, wxEmptyString, _("*.clq"), wxFD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));
    Center();

    Connect(wxidMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Leviers_InterfaceFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Leviers_InterfaceFrame::OnAbout);
    //*)
}

Leviers_InterfaceFrame::~Leviers_InterfaceFrame()
{
    //(*Destroy(Leviers_InterfaceFrame)
    //*)
}

void Leviers_InterfaceFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Leviers_InterfaceFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
