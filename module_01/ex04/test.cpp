#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string str = "Hello man! it is been a long time";
    std::cout << "string's length => " << str.length() << std::endl;
    std::string earased = "test";
    std::string inserted = "world";
    int index = str.find(earased);
    std::cout << "'test' => " << index << std::endl;
    std::cout << "'before earasing' => " << str << std::endl;
    str.erase (index, earased.length());
    std::cout << "'after earasing' => " << str << std::endl;
    str.insert(index, inserted);
    std::cout << "'after inserting' => " << str << std::endl;
    return 0;
}
