void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int temp;
    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}

/* #include <stdio.h>
int main()
{
    int tab[] = {8, 21, 3, 146, 20};
    sort_int_tab(tab, 5);
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
    printf("%d\n", tab[4]);
} */