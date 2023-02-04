#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        for(int j = 0; argv[2][j]; j++)
            if (argv[1][i] == argv[2][j])
                i++;
        //se tiver chego ao fim da primeira string quer dizer q é possivel escrever
        if (!argv[1][i])
            write(1, argv[1], ft_strlen(argv[1]));
    }
    write(1, "\n", 1);
}