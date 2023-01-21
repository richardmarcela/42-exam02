#include <unistd.h>

void putchar(int i)
{
    if (i > 9)
        putchar(i / 10);
    int to_write = i % 10 + '0';
    write(1, &to_write, 1);
}

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            putchar(i);
        write(1, "\n", 1);
    }
}