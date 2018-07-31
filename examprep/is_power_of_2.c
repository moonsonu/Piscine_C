/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 18:52:59 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/16 19:08:45 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

int		main(void)
{
	printf("%d\n", is_power_of_2(6));
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(128));
	printf("%d\n", is_power_of_2(7));
	printf("%d\n", is_power_of_2(12));
	printf("%d\n", is_power_of_2(18));

	return (0);
}
