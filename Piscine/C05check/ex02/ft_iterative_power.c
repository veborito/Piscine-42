/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:07:40 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/22 09:27:30 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 0;
	x = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power - 1)
	{
		nb = nb * x;
		i++;
	}
	return (nb);
}

/*
int main()
{
	printf("%d\n", ft_iterative_power(10, 4));
	printf("%d\n", ft_iterative_power(-45, -4));
	printf("%d\n", ft_iterative_power(-30, 4));
	printf("%d\n", ft_iterative_power(-10, 0));
	printf("%d\n", ft_iterative_power(10, -4));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(200, 0));
	printf("%d\n", ft_iterative_power(3, 4));
	printf("%d\n", ft_iterative_power(40, 3));
	printf("%d\n", ft_iterative_power(1, -45));
	printf("%d\n", ft_iterative_power(4, 4));
}
*/
