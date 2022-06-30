/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibanez <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:45:16 by dibanez           #+#    #+#             */
/*   Updated: 2022/06/11 16:20:32 by dibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y);

void	ft_putchar2(int i, int x);

void	rush(int x, int y);

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	l;

	i = 1;
	j = 1;
	l = '0' - 38;
	while (j <= y)
	{
		if (j == 1 | j == y)
		{
			ft_putchar(i, j, x, y);
		}
		else
		{
			ft_putchar2(i, x);
		}
		i = 1;
		j++;
		write(1, &l, 1);
	}
}
