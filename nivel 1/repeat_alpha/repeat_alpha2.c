#include <unistd.h>

int index_of(char c)
{
    char maiuscula[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char minuscula[] = "abcdefghijklmnopqrstuvwxyz";

    if (c >= 'a' && c <= 'z')
    {
        for (int i = 0; minuscula[i]; i++)
            if (c == minuscula[i])
                return (i + 1);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        for (int i = 0; maiuscula[i]; i++)
            if (c == maiuscula[i])
                return (i + 1);
    }
    else
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        for (int i = 0; argv[1][i]; i++)
        {
            for (int j = 0; j < index_of(argv[1][i]); j++)
                write(1, &argv[1][i], 1);
        }
    }
    write(1, "\n", 1);
}