<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
#include <stdlib.h>
#include <stdio.h>
>>>>>>> 1f839c8f2698b86260ae6a2e32df31fa5aaf9f2d

int main(int argc, char **argv)
{
    if (argc == 3)
    {
<<<<<<< HEAD
        int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);
        int result = 1;
        int min = n1;

        if (n2 < n1)
            min = n2;
        for (int i = 2; i <= min; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                result = i;
        }
        printf("%d", result);
=======
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
>>>>>>> 1f839c8f2698b86260ae6a2e32df31fa5aaf9f2d
    }
    printf("\n");
}