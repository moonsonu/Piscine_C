/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 12:19:45 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/01 15:42:22 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int sum;

	sum = 1;

	i = nb;
	if (i == 0)
		return (1);
	while (i > 0 && i < 13)
	{
		sum = sum * i;
			i--;
		if (i == 0)
			return (sum);
	}
	return (0);
}

int		main(void)
{
	int a;

	a = ft_iterative_factorial(0);
	printf("%d", a);
	return (0);
}
