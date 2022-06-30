/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:23:24 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/14 19:05:04 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	a[] = "012393439547543895302234909";
	char	b[] = "08dshfsdhfdi0fdf &*^((^";
	char	c[] = "";
	int		x;
	int		y;
	int		z;

	x = ft_str_is_numeric(a);
	y = ft_str_is_numeric(b);
	z = ft_str_is_numeric(c);

	printf("%d %d %d\n", x, y, z);

}
*/
