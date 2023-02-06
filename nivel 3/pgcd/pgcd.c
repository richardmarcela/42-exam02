#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
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
    }
    printf("\n");
}