/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:46:40 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/24 14:58:15 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*int	ft_basecheck(char *base)
{
	int	i;
	int j;
}
*/
int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}


void	ft_putnbr_base(int nbr, char *base)
{
	long int nb;

	nb = (long int) nbr;
	if (nb >= 0 && nb <= base_len(base))
		write(1, &base[nb], 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr_base(nb, base);
	}
	else
	{
		ft_putnbr_base(nb / base_len(base), base);
		nb = nb % base_len(base);
		write(1, &base[nb], 1);	
	}
}

int	main(int argc, char **argv)
{
	char *hexa;
	char *bina;
	char *oct;
	(void)argc;
	
	hexa = "0123456789ABCDEF";
	bina = "01";
	oct = "poneyvif";
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	write(1, "\n", 1);
	/*
	ft_putnbr_base(894, bina);
	write(1, "\n", 1);
	ft_putnbr_base(894, oct);
	write(1, "\n", 1);
	
	ft_putnbr_base(-2147483648, hexa);
	write(1, "\n", 1);

	ft_putnbr_base(-894, bina);
	write(1, "\n", 1);
	ft_putnbr_base(-894, oct);
	write(1, "\n", 1);
	ft_putnbr_base(4, hexa);
	write(1, "\n", 1);
	ft_putnbr_base(8, bina);
	write(1, "\n", 1);
	ft_putnbr_base(4, oct);
	*/
	return (0);
}
