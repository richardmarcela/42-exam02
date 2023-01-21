#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    int number = 1;
    while (number <= n)
    {
        if (number == n)
            return (1);
        number *= 2;
    }
    return (0);
}
/* 
int main()
{
    printf("%d", is_power_of_2(4));
} */