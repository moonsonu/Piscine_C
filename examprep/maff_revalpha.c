/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:05:53 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/15 13:10:16 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int i;
	int a;

	i = 'z';
	while (i >= 'a')
	{
		if (i % 2 == 1)
		{
			a = i - 32;
			write(1, &a, 1);
		}
		else
			write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}

