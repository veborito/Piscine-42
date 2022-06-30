/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:58:22 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/22 13:53:46 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_mon_bail_la(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*stock;

	i = 1;
	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc)
		{
			if (argv[i + j] == 0)
				break ;
			if (ft_strcmp(argv[j], argv[i + j]) > 0)
			{
				stock = argv[i + j];
				argv[i + j] = argv[j];
				argv[j] = stock;
			}
			i++;
		}
		j++;
	}
	ft_print_mon_bail_la(argv, argc);
	return (0);
}
