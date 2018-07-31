/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:02:42 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/06 19:39:24 by ksonu            ###   ########.fr       */
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
