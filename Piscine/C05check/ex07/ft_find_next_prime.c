/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:47:36 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/22 09:47:52 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (1);
	else if (nb <= 1)
		return (0);
	while (x * x <= nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	x;

	x = 0;
	if (nb <= 2)
		return (2);
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(1000));
	printf("%d\n", ft_find_next_prime(2147483640));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(-10000));
}
*/
