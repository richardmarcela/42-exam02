#include <stddef.h>
#include <stdio.h>
#include <string.h>

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

int main()
{
    const char *s = "barcela";
    const char *accept = "barcela";
    printf("%zu\n", ft_strspn(s, accept));
    printf("%zu", strspn(s, accept));
}