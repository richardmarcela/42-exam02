char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return (0);
    while (*s1)
    {
        i = 0; // pq cada char de s1 tem que ser comparado com todos os caracteres de s2
        while (s2[i])
        {
            if (*s1 == s2[i])
                return ((char *)s1);
            i++;
        }
        s1++;
    }
    return (0);
}

/* #include <stdio.h>
int main()
{
    printf("%s", ft_strpbrk("testeeeee", "aeiou"));
} */