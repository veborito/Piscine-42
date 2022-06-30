/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 08:23:58 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/17 11:13:20 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	lenchar(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	x;

	i = lenchar(to_find);
	j = 0;
	if (i == 0)
		return (str);
	while (str[j] != '\0')
	{
		x = 0;
		while (to_find[x] == str[j + x])
		{
			if (to_find[x + 1] == '\0')
				return (&str[j]);
			x++;
		}	
		j++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "zeljefjelo hookllo jeffeye";
	char	b[] = "ok";

	printf("%s\n",ft_strstr(a, b));
	printf("%s\n",strstr(a, b));	
}
*/
