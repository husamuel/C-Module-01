#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Usage: ./Harl_2.0 <LEVEL>" << std::endl;
        return 1;
    }

    Harl harl;
    std::string level = argv[1];

    std::cout << std::endl << "------ " << level << " Level ------" << std::endl;
    harl.complain(level);

    return 0;
}
