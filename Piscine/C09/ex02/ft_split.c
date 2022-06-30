/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:46:22 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/30 16:37:06 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;

	copy = malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	ft_isin(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	ft_nbel(char *str, char *charset)
{
	int	i;
	int	x;
	int	len;
	int	nbel;

	i = 0;
	nbel = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		while (ft_isin(str[i], charset))
			i++;
		x = i;
		if (str[i] == '\0')
			return (nbel);
		while (!ft_isin(str[i], charset) && str[i])
			i++;
		if (i > x)
			nbel++;
		i++;
	}
	return (nbel);
}

char	**ft_split(char *str, char *charset)
{
	char	**splited;
	int		i;
	int		j;
	int		k;
	char	temp[4037];

	i = 0;
	k = 0;
	splited = malloc(sizeof(char *) * (ft_nbel(str, charset) + 1));
	while (i < ft_strlen(str))
	{
		while (ft_isin(str[i], charset))
			i++;
		j = 0;
		while (!(ft_isin(str[i], charset)) && str[i])
			temp[j++] = str[i++];
		temp[j] = '\0';
		if (j > 0)
			splited[k++] = ft_strdup(temp);
		i++;
	}
	splited[k] = NULL;
	return (splited);
}

/*
int	main()
{
	char str[] = "dddddddddd ";
	char charset[] = " d";
	char **splited;
	int	i;
	
	i = 0;
	splited = ft_split(str, charset); 
	
	while (i < ft_nbel(str, charset))
	{
		printf("%s\n", splited[i]);
		i++;
	}
}
*/
