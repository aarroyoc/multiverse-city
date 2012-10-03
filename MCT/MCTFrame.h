#ifndef MCTFRAME_H_INCLUDED
#define MCTFRAME_H_INCLUDED
#include "Libs.h"
class MCTFrame: public wxFrame
{
    public:
        MCTFrame(wxFrame *frame, const wxString& title);
        ~MCTFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout,
            ID_CARGAR,
            ID_NUEVO
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void Cargar(wxCommandEvent& event);
        void Nuevo(wxCommandEvent& event);
        bool ComprobarArchivos();
        DECLARE_EVENT_TABLE()

};



#endif // MCTFRAME_H_INCLUDED
