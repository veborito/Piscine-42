/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:44:13 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/27 16:03:34 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_add_sep(char *s, char *sep, int *j)
{
	int	x;
	int	k;

	x = *j;
	k = 0;
	while (sep[k])
	{
		s[x] = sep[k];
		k++;
		x++;
	}
	*j = x;
}

int	ft_total_len(char **strs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcat_v2(char **strs, char *sep, char *s, int size)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	j = 0;
	while (i < size)
	{
		y = 0;
		while (y < (ft_strlen(strs[i])))
		{
			s[j] = strs[i][y];
			j++;
			y++;
		}
		i++;
		if (i < size)
			ft_add_sep(s, sep, &j);
	}
	s[j] = '\0';
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_strs_len;
	int		total_sep_len;
	char	*s;

	total_strs_len = ft_total_len(strs);
	total_sep_len = ft_strlen(sep) * (size - 1);
	if (size == 0)
	{
		s = malloc(sizeof(**strs) * 1);
		s[0] = '\0';
		return (s);
	}
	else
	{
		s = malloc(sizeof(**strs) * (total_strs_len + total_sep_len + 1));
		ft_strcat_v2(strs, sep, s, size);
	}
	return (s);
}
/*
int main(void)
{
	char **strs = malloc(sizeof(char)*10000);
	char *str1 ="Salut";
	char *str2 = "comment";
	char *str3 = "ca";
	char *str4 = "va";
	char *str5 = " 42 1!1!";
	char *str6 = "ta";
	char *str7 = "maman";
	char *str8 = "est";
	char *str9 = "trop";
	char *str10 = "jolie";
	char *dst;
	char *sep = ", ";

	strs[0] = str1;
	strs[1] = str2;
	
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;
	strs[5] = str6;
	strs[6] = str7;
	strs[7] = str8;
	strs[8] = str9;
	strs[9] = str10;
	int i = 0;
	while (i <= 10)
	{
		dst = ft_strjoin(i, strs, sep);
		printf("%s\n", dst);
		i++;
	}
	free(dst);

	return (0);
}
*/
