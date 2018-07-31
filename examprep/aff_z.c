/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:12:08 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/15 13:21:44 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1, "z\n", 2);
		return (0);
	}
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'z')
			{
				write(1, "z\n", 2);
				return (0);
			}
			i++;
		}
	write(1, "z\n", 1);
	return (0);
}
