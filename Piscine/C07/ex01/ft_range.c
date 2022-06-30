/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:33:57 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/26 21:38:52 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	x;
	int	i;

	tab = malloc(sizeof(*tab) * (max - min));
	x = 0;
	i = min;
	if (min >= max)
		return (0);
	if (tab == 0)
		return (0);
	while (i < max)
	{
		tab[x] = i;
		i++;
		x++;
	}
	return (tab);
}
/*
int	main()
{
	int min[5] = {-5, 0, 0, 10, 10};
	int max[5] = {0, 1, 101, 4, 10};
	int i = 0;
	
	printf("--- ft_range ---\n");
	while (i < 5)
	{
		int *range = ft_range(min[i], max[i]);
		
		printf("min: %d max: %d\n", min[i], max[i]);
		
		int j_max = (max[i] - min[i]);
		int j = 0;

		printf("result: ");

		while (j < j_max)
			printf("%d ", range[j++]);

		printf("\n");
		printf("adress: %p\n\n", &range[j]);

		i++;
	}
	return (0);
}
*/
