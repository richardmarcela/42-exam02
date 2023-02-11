#include <unistd.h>

int iter(char *str, char c, int len)
{
	int i = 0;
	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return(1);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		char c;
		while ((c = argv[1][i]))
		{
			if (!iter(argv[1], c, i) && iter(argv[2], c, -1))
				write(1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}