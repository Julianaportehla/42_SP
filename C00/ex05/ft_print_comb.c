/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-jesu <jde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 05:11:32 by coder             #+#    #+#             */
/*   Updated: 2022/04/16 19:00:36 by jde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    check_number_and_print(int c, int d, int u);

void    ft_print_comb(void)
{
    int    c;
    int    d;
    int    u;

    c = 48;
    while (c <= 57)
    {
        d = 48;
        while (d <= 57)
        {
            u = 48;
            while (u <= 57)
            {
                check_number_and_print(c, d, u);
                u++;
            }
            d++;
        }
        c++;
    }
}

void    check_number_and_print(int c, int d, int u)
{
    char    number[3];

    if (d > c && u > d)
    {
        number[0] = c;
        number[1] = d;
        number[2] = u;
        if (c == 55 && d == 56 && u == 57)
        {
            write(1, &number, 3);
        }
        else
        {
            write(1, &number, 3);
            write(1, ", ", 2);
        }
    }
}