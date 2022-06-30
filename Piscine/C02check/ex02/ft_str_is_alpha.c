/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:00:11 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/14 18:59:47 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z' )
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	x[] = "bvddgADKFFEdsdSWKFrre";
	char	y[] = "asasAD4343JGJEOGGEI203293as";
	char	w[] = "a_(&saASR 091*Foas";
	char	t[] = "";
	int		z;
	int		a;
	int		b;
	int		e;

	z = ft_str_is_alpha(x);
	a = ft_str_is_alpha(y);
	b = ft_str_is_alpha(w);
	e = ft_str_is_alpha(t);
	printf("%d %d %d %d\n", z, a, b, e);
	return (0);
}
*/
