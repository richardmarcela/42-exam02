int max(int *tab, unsigned int len)
{
    int max;
    int i;

    if (!len)
        return (0);
    max = *tab;
    i = 1;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}

/* #include <stdio.h>
int main(void)
{
    int tab[] = {-13, -5, -35, -23};
    unsigned int len = 4;

    printf("%d", max(tab, len));
} */