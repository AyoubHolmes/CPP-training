#include <iostream>

void       transform(char **t)
{
    char *s;

    s = *t;
    if (s)
    {
        while (*s)
        {
            *s = std::toupper(*s);
            (s)++;
        }
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            transform(&argv[i]);
            std::cout << argv[i];
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}
