#include <unistd.h>

int index_of_char(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 1);
    else if (c >= 'a' && c <= 'z')
        return (c - 'a' + 1);
    else
        return (1);
}

int main(int argc, char**argv)
{
    if (argc == 2)
    {
        char c;
        for (int i = 0; (c = argv[1][i]); i++)
        {
            for (int j = 0; j < index_of_char(c); j++)
                write(1, &c, 1);
        }
    }
    write (1, "\n", 1);
}