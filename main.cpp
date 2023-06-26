#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "hello world!\n";
    std::cout << "Number of args passed: ";
    std::cout << argc + " \n";
    std::cout << "first arg passed: ";
    std::cout << argv[1] + "\n";
    return 0;
}
