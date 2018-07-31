/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:23:05 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/01 09:25:25 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (2);
	i = 2;
	while (i <= nb)
	{
        if (nb == i)
            return (nb);
		if (nb % i == 0)
		{
			i = 2;
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
		return (nb);
}

int		main(void)
{
	int a;
	a = (ft_find_next_prime(300));
	printf("%d", a);
	return (0);
}
