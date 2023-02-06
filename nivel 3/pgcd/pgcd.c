#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        //converto os argumentos para inteiros
        int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);
        int i = 1; //este será divisor
        int pgcd; //guardará o número que for divisivel por n1 e por n2

        //só exite se ambos os números forem maiores que 0
        if (n1 > 0 && n2 > 0)
        {
            //enquanto o divisor for menor que o maior número
            while (i <= n1 || i <= n2)
            {
                //se for divisivel guardo e avanço
                if (n1 % i == 0 && n2 % i == 0)
                    pgcd = i;
                i++;
            }
            //printo o último i
            printf("%d", pgcd);
        }
    }
    printf("\n");
}