// -*- C++ -*-
//
// generated by wxGlade 1.0.4 on Sun May  7 22:05:17 2023
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#include <wx/wx.h>
#include "FrameLog.h"

// begin wxGlade: ::extracode
// end wxGlade


FrameLog::FrameLog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: FrameLog::FrameLog
    wxBoxSizer* sizer_top = new wxBoxSizer(wxVERTICAL);
    panel_top = new wxPanel(this, wxID_ANY);
    panel_top->SetMinSize(wxSize(500, 500));
    sizer_top->Add(panel_top, 2, wxEXPAND, 0);
    wxBoxSizer* sizer_log = new wxBoxSizer(wxVERTICAL);
    text_ctrl_log = new wxTextCtrl(panel_top, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE|wxTE_READONLY);
    sizer_log->Add(text_ctrl_log, 1, wxALL|wxEXPAND, 3);
    wxBoxSizer* sizer_buttons = new wxBoxSizer(wxHORIZONTAL);
    sizer_log->Add(sizer_buttons, 0, wxALIGN_RIGHT, 0);
    button_clear = new wxButton(panel_top, wxID_CLEAR, wxEmptyString);
    sizer_buttons->Add(button_clear, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 3);
    button_save = new wxButton(panel_top, wxID_SAVEAS, wxEmptyString);
    sizer_buttons->Add(button_save, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 3);
    button_close = new wxButton(panel_top, wxID_CLOSE, wxEmptyString);
    button_close->SetDefault();
    sizer_buttons->Add(button_close, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 3);
    
    panel_top->SetSizer(sizer_log);
    SetSizer(sizer_top);
    sizer_top->Fit(this);
    Layout();
    // end wxGlade
}


BEGIN_EVENT_TABLE(FrameLog, wxFrame)
    // begin wxGlade: FrameLog::event_table
    EVT_BUTTON(wxID_CLEAR, FrameLog::log_clear)
    EVT_BUTTON(wxID_SAVEAS, FrameLog::log_saveas)
    EVT_BUTTON(wxID_CLOSE, FrameLog::log_close)
    // end wxGlade
END_EVENT_TABLE();


void FrameLog::log_clear(wxCommandEvent &event)  // wxGlade: FrameLog.<event_handler>
{
    event.Skip();
    // notify the user that he hasn't implemented the event handler yet
    wxLogDebug(wxT("Event handler (FrameLog::log_clear) not implemented yet"));
}

void FrameLog::log_saveas(wxCommandEvent &event)  // wxGlade: FrameLog.<event_handler>
{
    event.Skip();
    // notify the user that he hasn't implemented the event handler yet
    wxLogDebug(wxT("Event handler (FrameLog::log_saveas) not implemented yet"));
}

void FrameLog::log_close(wxCommandEvent &event)  // wxGlade: FrameLog.<event_handler>
{
    event.Skip();
    // notify the user that he hasn't implemented the event handler yet
    wxLogDebug(wxT("Event handler (FrameLog::log_close) not implemented yet"));
}


// wxGlade: add FrameLog event handlers

