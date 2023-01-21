#include <unistd.h>
#include <stdio.h>

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
        while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i--;
        int end = i;
        while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
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