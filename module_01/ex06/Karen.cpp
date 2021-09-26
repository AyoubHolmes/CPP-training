#include "Karen.hpp"

Karen::Karen(/* args */)
{
}

void Karen::debug(void) {
    std::cout << "[ WARNING ]\n";
    std::cout << "{ I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! }" << std::endl;
}

void Karen::info(void) {
    std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void) {
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
    std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain (std::string level ) {
    void (Karen::* ptr[4])(void) = {
        &Karen::debug,
        &Karen::warning,
        &Karen::info,
        &Karen::error
    };
    std::string functions_names[4] = {
        "DEBUG",
        "WARNING",
        "INFO",
        "ERROR"
    };
    int i = 0;
    while (i < functions_names->size()) {
        if (functions_names[i] == level)
            break;
        i++;
    }
    switch (i)
    {
    case 0:
        (this->*(ptr)[0])();
    case 1:
        (this->*(ptr)[1])();
    case 2:
        (this->*(ptr)[2])();
    case 3:
        (this->*(ptr)[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }

}

Karen::~Karen()
{
}