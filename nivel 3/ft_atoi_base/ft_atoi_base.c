int is_whitespace(char c)
{
    // 9 - 13 = \t \n \v \f \r (o que é pego pela função isspace) 
    if (c == ' ' || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int is_valid(char c, int base)
{
    char minusculas[] = "0123456789abcdef";
    char maiusculas[] = "0123456789ABCDEF";

    //ando nos arrays apenas da base pra baixo, 
    //ja que se a base for 4 só é considerado 0123
    //e assim por diante
    while (base--)
        if (c == minusculas[base] || c == maiusculas[base])
            return (1);
    return (0);
}

//tranformo o valor do char em int
int value_of(char c)
{
    //ex.: c = 2
    //apenas diminui 48 e acha o 2 char em int
    if (c >= '0' && c <= '9')
        return (c - '0');

    //ex.: c = a (a representa 10 na base 16 por ex)
    //a = 97 (ascii)
    //97 - 97 + 10 = 10
    //a = 10
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);

    //similar as minusculas
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign;

    while(is_whitespace(*str))
        str++;
    //levo em consideração apenas o sinal que está na primeira posição
    sign = (*str == '-') ? -1 : 1;
    //ando na string se o valor anterior for um sinal
    (*str == '-' || *str == '+') ? ++str : 0;
    /* same as
        sign = 1; 
        if (*str == '-' || *str == '+')
        {
            if (*str == '-')
                sign = -1;
            *str++;
        }
     */
    //enquanto esiver no array e for compatível com a base
    while (is_valid(*str, str_base))
        //res acumula o valor, transformando na base 10 a posição atual da string
        res = res * str_base + value_of(*str++);
    //multiplico o resultado pelo sinal, que só irá adicionar - caso negativo
    return (res * sign);
}

/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_atoi_base("a", 16));
} */