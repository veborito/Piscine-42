/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:08:14 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/14 11:17:17 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	a[] = "AHSA#@$&733S%KDHASD AD DS";
	char	b[] = "ASdsdADJ \1 dsd";
	char	c[] = "";
	int		x;
	int		y;
	int		z;

	x = ft_str_is_printable(a);
	y = ft_str_is_printable(b);
	z = ft_str_is_printable(c);

	printf("%d %d %d\n", x, y, z);
}
*/
