#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = ft_strlen(argv[1]) - 1;
        while (argv[1][i] && is_space(argv[1][i]))
            i--;
        int end = i;
        while (argv[1][i] && !is_space(argv[1][i]))
            i--;
        i++;
        int start = i;
        while (argv[1][start] && start <= end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}