#include <unistd.h>

//se foi vista antes, retorna 1, senão, retorna 0
int seen_before(char *str, int max, char c)
{
    for (int i = 0; i < max; i++)
        if (str[i] == c)
            return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = -1;
        int j = -1;

        //percorro a primeira string
        while (argv[1][++i])
            //testo se a letra atual ja foi vista antes na string atual, partindo do inicio da string até a posição atual
            if (!seen_before(argv[1], i, argv[1][i]))
                write(1, &argv[1][i], 1);
        //percorro a segunda string
        while (argv[2][++j])
            //testo se a letra atual ja foi vista antes na string atual, do inicio até a posição atual, e na anterior inteira
            if (!seen_before(argv[1], i, argv[2][j]) && !seen_before(argv[2], j, argv[2][j]))
                write(1, &argv[2][j], 1);
    }
    write (1, "\n", 1);
}