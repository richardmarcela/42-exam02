#include <stdlib.h>

int num_digits(int nbr)
{
    int i = 0;
    if (nbr <= 0)
        i++;
    while (nbr)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int nbr)
{
    int len = num_digits(nbr);
    int sign = 1;
    char *str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    len--;
    if (nbr < 0)
    {
        str[0] = '-';
        sign = -1;
    }
    else if (nbr == 0)
        str[len] = '0';
    while (nbr != 0)
    {
        str[len] = ((nbr % 10) * sign) + '0';
        nbr /= 10;
        len--;
    }
    return (str);
}

/* #include <stdio.h>
int		main(void)
{
	int number1 = 123456789;
	int number2 = 1;
	int number3 = 0;
	int number4 = 0001342;
	int number5 = 42;
	int number6 = 422;
	int number7 = -123456789;
	int number8 = -1;
	int number9 = -0;
	int number10 = -00101;
	int number11 = -42;
	int number12 = -422;
	ft_itoa(number1);
	printf("%s\n", ft_itoa(number2));
	printf("%s\n", ft_itoa(number3));
	ft_itoa(number4);
	printf("%s\n", ft_itoa(number5));
	ft_itoa(number6);
    printf("%s\n", ft_itoa(number6));
	ft_itoa(number7);
	ft_itoa(number8);
	ft_itoa(number9);
	ft_itoa(number10);
	ft_itoa(number11);
	ft_itoa(number12);
	return (0);
}  */