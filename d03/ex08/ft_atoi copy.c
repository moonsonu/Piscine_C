/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 22:07:17 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/30 00:30:25 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 1;
	if (str[0] == '-')
	{
		c = -1;
		a = 1;
	}
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
		{
			b = b*10 + str[a] - '0';
		}
		else
			break;
		a++;
	}
	b = b * c;
	return (b);
}
int 	main(void)
{
	char str1[] = "45345";
	printf("%d", ft_atoi(str1));
	return (0);
}
