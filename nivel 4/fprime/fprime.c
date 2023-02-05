#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int number = atoi(argv[1]);
        int i = 1;

        if (number == 1)
            printf("1");
        // ex.: number = 42
        // i = 2
        // printa o 2 pq é divisivel por 42
        // printa o * 
        // number agr será 21 (42 / 2)
        // i volta a ser 1
        // entra no while dnv como 2
        // mas não entra no if pq 21 não é divisivel por 2
        // i incrementa, agora será 3
        // entra no if pq 21 é divisivel por 3
        // printa o 3
        // printa o *
        // number agora seŕa 7
        // and so on...
        while (++i <= number)
        {
            //todos que forem divisiveis por 42
            if (number % i == 0)
            {
                //serão printados
                printf("%d", i);

                //caso seja o próprio 42, o loop acaba
                if (number == i)
                    break ;
                
                //se não, printo o sinal de *
                printf("*");

                number /= i;
                i = 1;
            }
        }
    }
    printf("\n");
}