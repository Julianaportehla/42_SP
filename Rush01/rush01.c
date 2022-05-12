/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:26:45 by alopes-n          #+#    #+#             */
/*   Updated: 2022/04/10 15:34:37 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	hgt;

	wid = 0;
	hgt = 0;
	while (hgt < y)
	{
		wid = 0;
		while (wid < x)
		{
			if ((wid == 0 && hgt == 0))
				ft_putchar('/');
			else if ((wid == x - 1 && hgt == 0) || (wid == 0 && hgt == y - 1))
				ft_putchar('\\');
			else if (wid == x - 1 && hgt == y - 1)
				ft_putchar('/');
			else if ((hgt == 0 || hgt == y - 1) || (wid == 0 || wid == x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			wid++;
		}
		write(1, "\n", 1);
		hgt++;
	}
}
