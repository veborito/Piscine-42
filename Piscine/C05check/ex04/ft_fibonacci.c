/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:02:59 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/22 09:33:56 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*
int	main()
{
	printf("%d\n", ft_fibonacci(11));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(-5));
}
*/
