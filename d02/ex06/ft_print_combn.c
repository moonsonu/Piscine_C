/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 07:26:13 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/29 11:58:44 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char i)
{
	write(1, &i, 1);
	return (0);
}

void	ft_print_combn(int n)
{
	int a;
	int b[n];
	int c;

	a = 0;
	while (a < n)
	{
		b[a++] = 0;
	}
	while (b[0] <= (10 - n) && n > 1)
	{
		c = 0;
		while (c < n)
			ft_putchar(b[c++] + '0');
		if (b[0] < (10 - n))
			write(1, ", ", 2);
		b[n - 1]++;
		a = n;
		while (a && n > 1)
		{
			a--;
			if (b[a] > 9)
			{
				b[a - 1]++;
				b[a] = 0;
			}
		}
	}
}
int		main(void)
{
	ft_print_combn(2);
	return (0);
}
