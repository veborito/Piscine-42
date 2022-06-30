/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:00:08 by rgodtsch          #+#    #+#             */
/*   Updated: 2022/06/25 18:30:35 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fct.h"
#include <unistd.h>

int	argv_ref(int argc, char **argv, char **nb, char **dict)
{
	if (argc == 2)
	{
		*dict = "";
		*nb = argv[1];
		return (1);
	}
	if (argc == 3)
	{
		*dict = argv[1];
		*nb = argv[2];
		return (1);
	}
	return (0);
}

int	test_nb(char *nb)
{
	int	i;

	i = 0;
	while (nb[i] != '\0')
	{
		if (nb[i] >= '0' && nb[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*nb;
	char	*dict;

	i = 1;
	nb = argv[1];
	if (argv_ref(argc, argv, &nb, &dict) == 0)
		write(1, "Mauvais nombre d'arguments !\n", 29);
	if (argv_ref(argc, argv, &nb, &dict) && test_nb(nb) == 0)
		write(1, "Veuillez rentrer un nombre !\n", 29);
	return (0);
}
