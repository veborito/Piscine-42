/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:34:36 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/14 19:05:22 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	a[] = "sdsdasfdg";
	char	b[] = "dsdADJFJdsd";
	char	c[] = "";
	int		x;
	int		y;
	int		z;

	x = ft_str_is_lowercase(a);
	y = ft_str_is_lowercase(b);
	z = ft_str_is_lowercase(c);
	
	printf("%d %d %d\n", x, y, z);
}
*/
