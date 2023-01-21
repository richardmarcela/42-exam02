#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        switch (argv[2][0])
        {
            case '+':
                printf("%d", atoi(argv[1]) + atoi(argv[3]));
                break;
            case '-':
                printf("%d", atoi(argv[1]) - atoi(argv[3]));
                break;
            case '*':
                printf("%d", atoi(argv[1]) * atoi(argv[3]));
                break;
            case '/':
                printf("%d", atoi(argv[1]) / atoi(argv[3]));
                break;
            case '%':
                printf("%d", atoi(argv[1]) % atoi(argv[3]));
                break;
        }
    }
    write(1, "\n", 1);
}