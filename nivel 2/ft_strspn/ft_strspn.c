#include <stddef.h>

char *find(const char *s, const char c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while (s[i])
    {
        if (!find(accept, s[i]))
            break;
        i++;
    }
    return (i);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
    const char *s = "teste";
    const char *accept = "tes";
    printf("%zu\n", ft_strspn(s, accept));
    printf("%zu", strspn(s, accept));
} */