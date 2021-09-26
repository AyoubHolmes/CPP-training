#include "Karen.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        Karen k;
        k.complain(argv[1]);
    }
    else
        std::cout << "NOT VALID ARGUMENT" << std::endl;
    return 0;
}
