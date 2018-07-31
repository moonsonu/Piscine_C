/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 15:23:06 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/01 15:49:07 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int power;
	int i;

	i = 0;
	power = 1;
	if (nb == 0)
		return (0);
	while (i * i <nb)
	{
		i++;
	}
	if ((nb % i) == 0)
		return (i);
	else 
		return (0);
}

int main(void)
{
	int a;
	
	a = ft_sqrt(1);
	printf("%d", a);
	return (0);
}
