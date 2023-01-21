#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t flag;
    for (i = 0; s[i]; i++)
    {
        flag = 0;
        for (size_t j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
                flag = 1;
        }
        if (!flag)
            return (i);
    }
    return (i);
}

/* int main()
{
    const char *s = "barcela";
    const char *accept = "abc";
    printf("%zu", ft_strspn(s, accept));
} */