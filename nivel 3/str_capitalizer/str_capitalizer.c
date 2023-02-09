#include <unistd.h>

int is_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\0')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z' && !is_space(argv[i][j - 1]))
                    argv[i][j] += 32;
                else if (argv[i][j] >= 'a' && argv[i][j] <= 'z' && is_space(argv[i][j - 1]))
                    argv[i][j] -= 32;
                write(1, &argv[i][j], 1);
            }
            write(1, "\n", 1);
        }
    }
}