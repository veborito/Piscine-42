/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:19:00 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/22 09:35:35 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb == 4)
		return (2);
	else if (nb > 2147395600)
		return (0);
	while (x < nb / 2)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_sqrt(-19));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(346921));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147395609));
}
*/
