#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int ft_strlen(const char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = ft_strlen(argv[1]) - 1;
		while (i)
		{
			int end = i;
			while (i && !is_space(argv[1][i - 1]))
				--i;
			int start = i;
			write(1, argv[1] + start, end - start + 1);
			/* same as 
			while (start <= end)
				write(1, &argv[1][start++], 1); */
			if (i)
			{
				i -= 2;
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}