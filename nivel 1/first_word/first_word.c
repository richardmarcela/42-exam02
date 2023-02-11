#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\0');
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1] && is_space(*argv[1]))
            argv[1]++;
        while (*argv[1] && !is_space(*argv[1]))
            write(1, argv[1]++, 1);
    }
    write(1, "\n", 1);
    return (0);
}