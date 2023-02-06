#include <unistd.h>

void ft_putnum(int n)
{
    if (n >= 10)
        ft_putnum(n / 10);
    char res = (n % 10) + '0';
    write(1, &res, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        unsigned int i = 0;
        unsigned int number = 0;
        unsigned int res;

        while (argv[1][i] >= '0' && argv[1][i] <= '9')
        {
            number = (number * 10) + (argv[1][i] - '0');
            i++;
        }
        for (unsigned int j = 1; j <= 9; j++)
        {
            res = number * j;
            ft_putnum(j);
            write(1, " X ", 3);
            ft_putnum(number);
            write(1, " = ", 3);
            ft_putnum(res);
            if (j != 9)
                write(1, "\n", 1);
        }
    }
     write(1, "\n", 1);
}