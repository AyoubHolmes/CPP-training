#include <fstream>
#include <iostream>

void replace_s1_s2(std::string &val, std::string s1, std::string s2) {
    /* ******** REPLACE FUNCTION *********** */
    int index = val.find(s1);
    while (index != std::string::npos)
    {
        val.erase (index, s1.length());
        val.insert(index, s2);
        index = val.find(s1, index + s2.length() - 1);
    }
}

int main(int ac, char **av)
{
    std::ifstream in;
    std::ofstream out;
    std::string file;
    std::string s1;
    std::string s2;
    std::string val;

    if (ac == 4)
    {
        file = av[1];
        s1 = av[2];
        s2 = av[3];
        in.open(file);
        std::getline(in, val, '\0');
        in.close();
        out.open(file + ".replace");
        replace_s1_s2(val, s1, s2);
        out << val;
        out.close();
    }
    else
        std::cout << "NOT THE RIGHT ARGUMENTS" << std::endl;
    return 0;
}