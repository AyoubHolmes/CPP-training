#include <iostream>

int main(void)
{
    std::string str = "Hello World!";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}
