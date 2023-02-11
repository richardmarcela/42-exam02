int	ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

/* #include <stdio.h>
int main()
{
    char src[10] = "testeeeee";
    printf("%d", ft_strlen(src));
} */