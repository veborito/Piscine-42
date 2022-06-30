/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:45:26 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/25 18:07:16 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 4036

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_openfile(void)
{
	char	*fulldict;
	int		fd;
	int		ret;

	fd = open("numbers.dict", O_RDWR);
	if (fd == -1)
	{
		ft_putstr("Error\n");
	}
	fulldict = malloc(sizeof(*fulldict) * BUF_SIZE);
	if (fulldict == 0)
		return ("Error\n");
	ret = read(fd, fulldict, BUF_SIZE);
	fulldict[ret] = '\0';
	free(fulldict);
	if (close(fd) == -1)
	{
		ft_putstr("Error\n");
	}
	return (fulldict);
}
