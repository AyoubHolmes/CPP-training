#include "Karen.hpp"

int main(int argc, char const *argv[])
{
    Karen k;
    k.complain("DEBUG");
    k.complain("WARNING");
    k.complain("INFO");
    k.complain("ERROR");
    return 0;
}
