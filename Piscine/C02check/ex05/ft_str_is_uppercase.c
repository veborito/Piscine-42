/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:03:54 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/14 19:02:29 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z' ))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	a[] = "AHSASKDHASDADDS";
	char	b[] = "ASdsdADJFJdsd";
	char	c[] = "";
	int		x;
	int		y;
	int		z;

	x = ft_str_is_uppercase(a);
	y = ft_str_is_uppercase(b);
	z = ft_str_is_uppercase(c);
	
	printf("%d %d %d\n", x, y, z);
}
*/
