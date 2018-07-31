/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 14:09:39 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/30 14:31:17 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	while ( power < 0)
		return (0);
	if ( power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power-1)));
}
int main(void)
{
	int a;

	a = ft_recursive_power(2, 3);
	printf("%d", a);
	return (0);
}

