#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return (0);
    while (*s1)
    {
        i = 0;
        while (s2[i])
        {
            if (*s1 == *s2)
                return ((char *)s1);
            i++;
        }
        s1++;
    }
    return (0);
}

/* int main()
{
    printf("%s", ft_strpbrk("marcela", "a"));
} */