#include <unistd.h>

void    print_hex(int n)
{
    char str[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &str[n % 16], 1);
} 

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = 0;
        int i = -1;
        while (argv[1][i])
        {
            n *= 10;
            n = n + argv[1][i] - '0';
        }
        print_hex(n);
    }
    write(1, "\n", 1);
}