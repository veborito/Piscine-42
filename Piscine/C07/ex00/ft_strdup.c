/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:22:27 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/26 11:36:12 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = malloc(sizeof(*copy) * ft_strlen(src));
	i = 0;
	if (copy == 0)
		return (0);
	while (i < src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main()
{
	char	src[] = "salut";
	char	*str;

	str = ft_strdup(src);
	free(str);
	printf("%s\n", str);
}
*/
