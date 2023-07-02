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
            
            return;
        }
        std::cout << "please specify a command.\n";
        return;
    }
    running = false;
}