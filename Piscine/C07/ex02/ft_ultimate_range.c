/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:15:33 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/27 10:09:11 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	x;

	i = min;
	x = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(**range) * (max - min));
	if (*range == 0)
		return (-1);
	while (i < max)
	{
		(*range)[x] = i;
		i++;
		x++;
	}
	return (x);
}
/*
int main (void)
{
	int min[6] = {-5, 0, 0, 10, 10, -2147483648};
	int max[6] = {1, 1, 101, 4, 10, 2147483647};
	int i = 0;
	
	printf("--- ft_ultimate_range ---\n");
	while (i < 6)
	{
		int *range;
		int **p0range = &range;

		printf("%d\n",ft_ultimate_range(p0range, min[i], max[i]));
		
		printf("min: %d max: %d\n", min[i], max[i]);
		
		int j_max = (max[i] - min[i]);
		int j = 0;

		printf("result: ");

		while (j < j_max)
			printf("%d ", range[j++]);

		printf("\n");
		printf("adress: %p\n\n", range);

		i++;
	}
	return (0);
}
*/
