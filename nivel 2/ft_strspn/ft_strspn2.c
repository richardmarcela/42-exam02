#include <stddef.h>

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

/* #include <stdio.h>
#include <string.h>
int main()
{
    const char *s = "teste";
    const char *accept = "tes";
    printf("%zu\n", ft_strspn(s, accept));
    printf("%zu", strspn(s, accept));
} */