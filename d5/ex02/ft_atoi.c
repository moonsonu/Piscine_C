/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 09:01:06 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/03 10:51:30 by ksonu            ###   ########.fr       */
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
	while (str[0] == '-')
	{
		c = -1;
		a = 1;
	}
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
			b = b * 10 + str[a] - '0';
		a++;
	}
	b = b * c;
	return (b);
}

int		main(void)
{
	char str1[] = "sdf23435";
	printf("%d", ft_atoi(str1));
	return (0);
}
