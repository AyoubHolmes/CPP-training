#include <iostream>

void       transform(char **t)
{
    char *s;

    s = *t;
    if (s)
    {
        while (*s)
        {
            if (*s >= 'a' && *s <='z')
                *s -= 32;
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
            std::cout << argv[i] << std::endl;
            i++;
        }
    }
    return 0;
}
