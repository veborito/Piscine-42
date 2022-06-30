/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:11:52 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/30 18:02:11 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
int	*ft_range(int a)
{
	int	i;
	int	*tab;

	tab = malloc(sizeof(a) * a);
	i = 0;
	if (tab == 0)
		return (0);
	while (i <= a)
	{
		tab[i] = i;
		i++;
	}
	return (tab);
}

int	ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
*/
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *res;

	i = 0;
	res = malloc(sizeof(*res) * length);
	while (i <= length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return(res);
}
/*
int main()
{
	int	*tab;
	int *res;
	int i;

	i = 0;
	tab = ft_range(101);
	res = ft_map(tab, 101, &ft_is_prime);
	while (i < 101)
	{
		printf("%d : %d\n", i, res[i]);
		i++;
	}
	return (0);

}
*/
