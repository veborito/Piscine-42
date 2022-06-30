/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:32:49 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/30 17:20:09 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>

int	*ft_range(int a)
{
	int	i;
	int	*tab;

	tab = malloc(sizeof(a) * a);
	i = 0;
	if (tab == 0)
		return (0);
	while (i < a)
	{
		tab[i] = i;
		i++;
	}
	return (tab);
}

void	ft_putnbr(int x)
{
	if (x >= 0 && x <= 9)
	{
		x = x + 48;
		write(1, &x, 1);
	}
	else if (x < 0)
	{
		write(1, "-", 1);
		x *= -1;
		x  = (unsigned int) x;
		ft_putnbr(x);

	}
	else
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i <= length)
	{
		f(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}

int main()
{
	int	*tab;

	tab = ft_range(13340);
	ft_foreach(tab, 1337, &ft_putnbr);
	return (0);

}
