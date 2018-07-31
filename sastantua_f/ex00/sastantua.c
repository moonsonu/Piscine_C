/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 12:41:21 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/02 17:56:29 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	block(int b)
{
	int n;
	int i;
	int j;

	b = 1;
	n = b + 2;
	i = 0;
	j = 0;
	while (i < n && j < ((2 * n) + 1))
	{
			if ((i + j) >= 3)
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
			j++;
		}
			ft_putchar('\n');
}

int		main(void)
{
	block(1);
	return (0);
}
