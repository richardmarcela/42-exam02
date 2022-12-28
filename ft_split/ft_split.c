/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:04:07 by mrichard          #+#    #+#             */
/*   Updated: 2022/12/26 15:04:09 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    char **split;
    int j;

    if (!(split = malloc(sizeof(char) * 256)))
        return (NULL);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i+= 1;
    while (str[i])
    {
        j = 0;
        if (!(split[k] = malloc(sizeof(char) * 4096)))
            return(NULL);
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i += 1;
        split[k][j] = '\0';
        k += 1;
    }
    split[k] = NULL;
    return (split);
}

/* int		main()
{
	char	arr[] = "olol asdfgh xcfvgbhj fghj  dfghj           dfvgcdfvgbh";
	char	**splitted;
	splitted = ft_split(arr);
	printf("SPLITTED[0] = %s\n", splitted[0]);
	printf("SPLITTED[1] = %s\n", splitted[1]);
    printf("SPLITTED[2] = %s\n", splitted[2]);
    printf("SPLITTED[3] = %s\n", splitted[3]);
    printf("SPLITTED[4] = %s\n", splitted[4]);
    printf("SPLITTED[5] = %s\n", splitted[5]);
	return (0);
} */