// wxWidgets "Hello World" Program

// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#include <wx/wx.h>

#include <iostream>

/*variables*/

bool running;
// user input
std::string input;
std::string arg1;

/*Functions*/
void start();

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "hello world!\n";
    std::cout << "Number of args passed: ";
    std::cout << argc;
    std::cout << "\n";
    std::cout << "first arg passed: ";
    std::cout << argv[1];
    std::cout << "\n";

    if (argc > 2) {
        std::cout << "Sorry, you gave too many arguments. Please use -help for help.\n";
        return 1;
    }
    arg1 = argv[1];
    start();
    return 0;
}

// Start app 
void start() {
    running = true;
    while (running) {
        std::cin >> input;
        if (input == "-help") {
            std::cout << "Testing...\n";
            wxIMPLEMENT_APP(MyApp);
            return;
        }
        std::cout << "please specify a command.\n";
        return;
    }
    running = false;
}




class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};




class MyFrame : public wxFrame
{
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};




enum
{
    ID_Hello = 1
};




bool MyApp::OnInit()
{
    MyFrame* frame = new MyFrame();
    frame->Show(true);
    return true;
}