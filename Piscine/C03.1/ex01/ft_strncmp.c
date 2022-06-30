/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bverdeci <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:48:00 by bverdeci          #+#    #+#             */
/*   Updated: 2022/06/30 10:59:02 by bverdeci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && i < n) || (s2[i] && i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{ 

	char *s10 = "Patate";
	char *s100 = "Patates";
	unsigned char n10 = 0;
	printf("\n -+- EX 01 :Result = %i \n", (ft_strncmp(s10, s100, n10)));
	printf("Expected Result = %i \n\n", (strncmp(s10, s100, n10)));

	char *s11 = "";
	char *s110 = "Patates";
	unsigned char n11 = 1;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s11, s110, n11)));
	printf("Expected Result = %i \n\n", (strncmp(s11, s110, n11)));

	char *s12 = "Patate";
	char *s120 = "\0";
	unsigned char n12 = 2;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s12, s120, n12)));
	printf("Expected Result = %i \n\n", (strncmp(s12, s120, n12)));
	
	char *s13 = "nul ";
	char *s130 = "";
	unsigned char n13 = 3;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s13, s130, n13)));
	printf("Expected Result = %i \n\n", (strncmp(s13, s130, n13)));

	char *s14 = "012356";
	char *s140 = "012356";
	unsigned char n14 = 4;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s14, s140, n14)));
	printf("Expected Result = %i \n\n", (strncmp(s14, s140, n14)));

	char *s15 = "Patate";
	char *s150 = "\0";
	unsigned char n15 = 5;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s15, s150, n15)));
	printf("Expected Result = %i \n\n", (strncmp(s15, s150, n15)));

	char *s16 = "日本のゲームクリエイター";
	char *s160 = "日本のゲーム";
	unsigned char n16 = 6;
	printf("\n EX 01 :Result = %i \n", (ft_strncmp(s16, s160, n16)));
	printf("Expected Result = %i \n\n", (strncmp(s16, s160, n16)));
}
*/
