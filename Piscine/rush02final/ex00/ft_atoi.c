/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:35:43 by rgodtsch          #+#    #+#             */
/*   Updated: 2022/06/25 17:48:18 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	value;

	value = 0;
	while (*str >= '0' && *str <= '9')
	{
		value = (*str - 48) + (value * 10);
		str++;
	}
	return (value);
}

/*int main (void)
{
        char    str[30] = "1234567";
        ft_atoi(str);
        int     value = ft_atoi(str);
        printf("Int value =  %d\n", value);
    return 0;
}*/
