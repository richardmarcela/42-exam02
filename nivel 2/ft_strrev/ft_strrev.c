int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
	int i = -1;
	int j = ft_strlen(str);
	char temp;

	while (++i < --j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp; 
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "teste";
	ft_strrev(str);
    printf("%s\n", str);
} */