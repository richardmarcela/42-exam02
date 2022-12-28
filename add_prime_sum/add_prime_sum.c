/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:33:49 by mrichard          #+#    #+#             */
/*   Updated: 2022/12/20 21:25:02 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define ATOI(s, n) ft_atoi(s, 0, 1, n)
#define ISPRIME(n) ft_isprime(n, 2)

unsigned int ft_atoi(char *s, unsigned int res, unsigned int ex, unsigned int len)
{
    return (len ? ft_atoi(s, res + (s[len - 1] - '0') * ex, ex * 10, len - 1) : res);
}

bool ft_isprime(unsigned int n)
{
    if (n == 0 || n == 1)
        return (false);
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
            return (false);
        i++;
    }
    return (true);
}

/*
bool ft_isprime(unsigned int n, unsigned int i)
{
    if (n == 0 || n == 1)
        return false;
    if (i > n / 2)
        return true;
    return n % i == 0 ? false : ft_isprime(n, i + 1);
}
*/

void ft_putnum(unsigned int c)
{
    if (c > 9)
        ft_putnum(c / 10);
    char ch = c % 10 + '0';
    write(1, &ch, 1); 
}

size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        unsigned int i = 0;
        unsigned int res = 0;
        unsigned int arg_atoi = ATOI(argv[1], ft_strlen(argv[1]));
        while (i <= arg_atoi)
        {
            if (ft_isprime(i))
                res += i;
            i++;
        }
        ft_putnum(res);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}