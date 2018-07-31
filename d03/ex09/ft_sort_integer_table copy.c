/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 00:31:05 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/30 01:18:40 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int a;
	int temp;

	i = 0;
	while (i < size)
	{
		a = i + 1;
		while (a < size)
		{
			while (tab[i] > tab[a])
			{
				temp = tab[i];
				tab[i] = tab[a];
				tab[a] = temp;
			}
			a++;
		} 
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i++]);
	}
}

int main(void)
{
	int tab2[] = {2,3,1,5};
	ft_sort_integer_table(tab2, 4);
	return (0);
}
