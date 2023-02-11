#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i <= len; i++)
        dest[i] = src[i];
    return (dest);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    printf("Minha função:\n");
    char src[] = "teste";
    char *dest = ft_strdup(src);
    
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    char src2[] = "teste";
    char *dest2 = strdup(src2);
    
    printf("\nFunção original:\n");
    printf("src2: %s\n", src2);
    printf("dest2: %s\n", dest2);
} */