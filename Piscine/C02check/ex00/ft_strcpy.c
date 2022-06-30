/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 08:02:40 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/14 11:08:52 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char a[] = "" ;
	char b[] = "sadashkasasjsalfkahdf;a"; 

	ft_strcpy(a, b);
	ft_print(a);
	ft_putchar('\n');
}
*/
