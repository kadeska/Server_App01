#include <iostream>


/*variables*/

bool running;
// user input
std::string input;

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "hello world!\n";
    std::cout << "Number of args passed: ";
    std::cout << "" + argc;
    std::cout << "\n";
    std::cout << "first arg passed: ";
    std::cout << argv[1];
    std::cout << "\n";

    if (argc > 2) {
        std::cout << "Sorry, you gave too many arguments. Please use -help for help.\n";
        return 1;
    }
    input = argv[1];
    running = true;
    start();
    return 0;
}

// Start app 
void start() {
    while (running) {
        std::cin >> input;

        if (input == "-help") {
            std::cout << "Testing...";
            return;
        }

        std::cout << "please specify an argument.\n";
        return;
    }
}
