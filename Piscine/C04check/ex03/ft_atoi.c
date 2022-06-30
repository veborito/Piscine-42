/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:11:25 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/19 20:24:58 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	plusminus(char *str, int *i)
{
	int	sign;
	int	x;

	sign = 0;
	x = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
	{
		x++;
	}
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign++;
		x++;
	}
	*i = x;
	if (sign % 2 == 0)
		return (1);
	else
		return (-1);
}

int	rang(char *str, int i)
{
	int	r;

	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r++;
		i++;
	}
	return (r);
}

int	power(int r)
{
	int	x;
	int	i;

	x = 1;
	i = 1;
	while (i < r)
	{
		x = x * 10;
		i++;
	}
	return (x);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	r;
	int	res;

	i = 0;
	sign = plusminus(str, &i);
	r = rang(str, i);
	res = 0;
	if (sign == 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res + (str[i] - 48) * power(r);
		r--;
		if (! (str[i] >= '0' && str[i] <= '9'))
		{
			str[i] = '\0';
			return (res * sign);
		}
		i++;
	}
	return (res * sign);
}
/*
int main()
{
	char	a[] = "   ---+--+++++1234ff5454fg47676"; 
	printf("%d", ft_atoi(a));
}
*/
