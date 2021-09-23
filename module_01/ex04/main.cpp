#include <fstream>
#include <iostream>

std::string replace_s1_with_s2_in_line(std::string line, std::string s1, std::string s2) {
    std::string new_line = line;

    return (new_line);
}

int main(int ac, char **av)
{
    std::ifstream in;
    std::ofstream out;
    std::string file;
    std::string s1;
    std::string s2;

    if (ac == 4)
    {
        file = av[1];
        s1 = av[2];
        s2 = av[3];
        in.open(file, std::ios::in);
        out.open(file + ".replace", std::ios::out | std::ios::app);
        std::string val;
        for (std::string line; std::getline(in, line); )
        {
            val += replace_s1_with_s2_in_line(line, s1, s2) + "\n";
        }
        out << val;
        in.close();
    }
    else
        std::cout << "NOT THE RIGHT ARGUMENTS" << std::endl;
    return 0;
}