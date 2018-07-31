/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 18:47:43 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/29 19:33:27 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int		main(void)
{
	int c = 6;
	int d = 7;

	ft_ultimate_div_mod(&c, &d);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}
