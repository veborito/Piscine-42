/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibanez <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:17:14 by dibanez           #+#    #+#             */
/*   Updated: 2022/06/12 13:06:55 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y);

void	ft_putchar(int i, int j, int x, int y)
{
	char	c;

	while (i <= x)
	{
		if (x > 1 & y > 1)
		{
			if ((i == 1 & j == 1) | (i == x & j == y))
				c = 'A';
			else if ((i == x & j == 1) | (i == 1 & j == y))
				c = 'C';
			else
				c = 'B';
		}
		else
		{
			if (i == 1 & j == 1)
				c = 'A';
			else if ((i == x & j == 1) | (i == 1 & j == y))
				c = 'C';
			else
				c = 'B';
		}
		write(1, &c, 1);
		i++;
	}
}

void	ft_putchar2(int i, int x);

void	ft_putchar2(int i, int x)
{
	char	c;

	while (i <= x)
	{
		if (i == 1 | i == x)
			c = 'B';
		else
			c = ' ';
		write(1, &c, 1);
		i++;
	}
}
