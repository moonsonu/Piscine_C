/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:20:17 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/06 19:00:07 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_time(int hour)
{
	if (hour > 24)
	{
		hour = hour % 24;
		if (hour > 12)
			printf("%d.00 P.M.", hour);
		if (hour < 12)
			printf("%d.00 A.M.", hour);
	}
	if (hour == 24 || hour == 0)
	{
		hour = 12;
		printf("%d.00 A.M.", (hour));
	}
	if (hour < 24)
	{
		if (hour > 12)
			printf("%d.00 P.M.", (hour - 12));
		if (hour < 12)
			printf("%d.00 A.M.", hour);
	}
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	print_time(hour);
	printf(" AND ");
	print_time(hour + 1);
	printf("\n");
}

int		main(void)
{
	ft_takes_place(0);
	ft_takes_place(567);
	ft_takes_place(11);
}

