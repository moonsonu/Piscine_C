/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 13:01:11 by ksonu             #+#    #+#             */
/*   Updated: 2017/06/30 17:03:12 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if ( nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}

int		main(void)
{
	int a;

	a = ft_recursive_factorial(12);
	printf("%d", a);
	return (0);
}
