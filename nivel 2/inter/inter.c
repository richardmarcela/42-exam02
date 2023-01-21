/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:13:40 by mrichard          #+#    #+#             */
/*   Updated: 2022/12/26 16:34:11 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

inline static int iter(char *str, char c, int len)
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
		while (argv[1][i])
		{
			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}