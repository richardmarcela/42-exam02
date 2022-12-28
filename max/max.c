/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:32:51 by mrichard          #+#    #+#             */
/*   Updated: 2022/12/20 19:31:22 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int max;
    int i;

    if (!len)
        return (0);
    max = *tab;
    i = 1;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}

/* int main(void)
{
    int tab[] = {-13, -5, -35, -23};
    unsigned int len = 4;

    printf("%d", max(tab, len));
} */