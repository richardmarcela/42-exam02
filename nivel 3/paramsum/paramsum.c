#include <unistd.h>

void putnbr(int n)
{
    char num;
    if (n > 9)
        putnbr(n / 10);
    num = n % 10 + '0';
    write(1, &num, 1);
}

int main(int argc, char **argv)
{
    putnbr(argc - 1);
    write (1, "\n", 1);
}