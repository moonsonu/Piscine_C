/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:36:59 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/05 19:38:03 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *rc;
	int i;

	if (min >= max)
		return (0);
	rc = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		rc[i - min] = i;
		i++;
	}
	return (rc);
}
