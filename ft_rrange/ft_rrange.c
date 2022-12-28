/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:36:41 by mrichard          #+#    #+#             */
/*   Updated: 2022/12/28 13:56:04 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len;
    
    if (end < start)
        len = start - end + 1;
    else
        len = end - start + 1;
    int *str = malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++)
    {
        if (end < start)
            str[i] = end + i;
        else
            str[i] = end - i;
    }
    return (str);
}
/* int main(void)
{
    int *str = ft_rrange(0, 0);
    printf("%d\n", str[0]);
    printf("%d\n", str[1]);
    printf("%d\n", str[2]);
    printf("%d\n", str[3]);
    printf("%d\n", str[4]);
} */