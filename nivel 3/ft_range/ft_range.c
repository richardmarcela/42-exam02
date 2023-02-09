#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *array;
    int i = 0;

    if (start > end)
        array = malloc(sizeof(int) * (start - end) + 1);
    else
        array = malloc(sizeof(int) * (end - start) + 1);
    while (start != end)
    {
        array[i++] = start;
        if (start > end)
            start--;
        else
            start++;
    }
    array[i] = start;
    return (array);
}

/* #include <stdio.h>
int main(void)
{
    int *str = ft_range(1, 3);
    printf("%d\n", str[0]);
    printf("%d\n", str[1]);
    printf("%d\n", str[2]);
    printf("%d\n", str[3]);
} */