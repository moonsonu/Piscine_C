/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 17:11:08 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/29 18:12:51 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}

int		main(void)
{	
	int x;
	int y;
	x = 1;
	y = 2;

	ft_swap(&y, &x);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
