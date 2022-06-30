/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:38:53 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/19 20:21:31 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0 && nb < 10)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		nb = (nb % 10) + 48;
		write(1, &nb, 1);
	}
}
/*
int	main(void)
{
	int	a;

	a = 14;
	ft_putnbr(a);
}
*/
