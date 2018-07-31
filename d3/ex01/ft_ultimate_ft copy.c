/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 16:31:53 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/29 17:10:16 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int *nbr9;
	int **nbr8;
	int ***nbr7;
	int ****nbr6;
	int *****nbr5;
	int ******nbr4;
	int *******nbr3;
	int ********nbr2;
	int a;
	
	nbr9 = &a;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	ft_ultimate_ft(&nbr2);
	printf("%d\n", a);
	return (0);
}
