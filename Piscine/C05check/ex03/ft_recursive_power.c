/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:02:39 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/22 09:31:43 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
int	main()
{
	printf("%d\n", ft_recursive_power(3, 5));
	printf("%d\n", ft_recursive_power(10, 6));
	printf("%d\n", ft_recursive_power(15, 2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 23));
	printf("%d\n", ft_recursive_power(-1, 45));
	printf("%d\n", ft_recursive_power(-3, 3));
	printf("%d\n", ft_recursive_power(-4, 2));
	printf("%d\n", ft_recursive_power(3, -2));
	printf("%d\n", ft_recursive_power(-3, -2));
	printf("%d\n", ft_recursive_power(122, 0));
}
*/
