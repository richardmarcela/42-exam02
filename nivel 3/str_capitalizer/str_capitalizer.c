#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\0');
}

int main(int argc, char **argv)
{
    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        for (int i = 1; i < argc; i++)
        {
            char c;
            for (int j = 0; (c = argv[i][j]); j++)
            {
                if (c >= 'A' && c <= 'Z' && !is_space(argv[i][j - 1]))
                    c += 32;
                else if (c >= 'a' && c <= 'z' && is_space(argv[i][j - 1]))
                    c -= 32;
                write(1, &c, 1);
            }
            write(1, "\n", 1);
        }
    }
}