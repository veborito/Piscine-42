/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:38:21 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/30 09:53:56 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
	{
		nbr = nbr + 48;
		write(1, &nbr, 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		nbr = (unsigned int) nbr;
		ft_putnbr(nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	t_stock_str	*par;

	par = ft_strs_to_tab(ac, av);
	ft_show_tab(par);
	return (0);
}
*/
