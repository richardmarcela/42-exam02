#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                argv[i][j] += 32;
            else if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') &&
                (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
                argv[i][j] -= 32;
            write(1, &argv[i][j], 1);
            /* printf("teste");
            exit(0); */
            continue;
        }
    }
    write(1, "\n", 1);
}