/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:51:01 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/15 15:03:53 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char a[30] = "";
	char b[] = "borisdssdsadsd";

	ft_strncpy(a, b, 2);
	printf("%s\n" , a);
	ft_strncpy(a, b, 7);
	printf("%s\n" , a);
	ft_strncpy(a, b, 20);
	printf("%s\n" , a);
}
*/
