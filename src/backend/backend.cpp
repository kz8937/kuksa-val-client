#include <iostream>
#include <iostream>
#include <string>
int main()
{
    bool done = false;
    std::string input{};
    while (!done)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if (input == "quite")
        {
            done = true;
        }
        else if (input == "help")
        {
            std::cout << "\nCommand List:\n"
                      << "help: Display this help text \n"
                      << "quite: Exist program\n"
                      << std::endl;
        }
        else
        {
            std::cout << "Unrecognized Command" << std::endl;
        }
    }
    return 0;
}