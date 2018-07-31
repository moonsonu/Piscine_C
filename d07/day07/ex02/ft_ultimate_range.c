/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:42:47 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/05 19:38:42 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *rc;
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = min;
	rc = (int*)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		rc[i - min] = i;
		i++;
	}
	*range = rc;
	return (max - min);
}
