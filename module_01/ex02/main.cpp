#include <iostream>

int main(void)
{
    std::string str = "Hello World!";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memeory Address by str=>  " << &str << std::endl;
    std::cout << "Memeory Address by stringPTR =>  " << stringPTR << std::endl;
    std::cout << "Memeory Address by stringRef =>  " << &stringREF << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}
