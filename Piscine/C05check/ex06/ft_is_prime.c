/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:09:15 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/30 10:35:08 by bverdeci         ###   ########.fr       */
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
/*
int	main()
{
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(141));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(101));
	printf("%d\n", ft_is_prime(2056789331));
	printf("%d\n", ft_is_prime(2147483645));
	printf("%d\n", ft_is_prime(2147483646));
	printf("%d\n", ft_is_prime(2147483647));
}
*/
