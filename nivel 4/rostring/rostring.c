#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    if (argc == 1)
        write(1, "\n", 1);
    int i = 0;
    int first_word_len = 0;

    while (argv[1][i])
    {
        while (is_space(argv[1][i]))
            i++;
        if (argv[1][i] && !is_space(argv[1][i]))
        {
            if (first_word_len == 0)
                while (argv[1][i] && !is_space(argv[1][i++]))
                    first_word_len++; //guardo o tamanho da primeira palavra
            else
            {
                //escrevo o resto da string
                while (argv[1][i] && !is_space(argv[1][i]))
                    write(1, &argv[1][i++], 1);
                write(1, " ", 1);
            }
        }
    }
    i = 0; //retorno o contador a primeira palavra e a escrevo
    while (is_space(argv[1][i]))
        i++;
    while (first_word_len--)
        write(1, &argv[1][i++], 1);
    write(1, "\n", 1);
}