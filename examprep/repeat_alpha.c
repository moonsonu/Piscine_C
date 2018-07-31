/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:56:32 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/15 14:36:05 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_repeat(char c)
{
	int repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 64;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 96;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int i;
	int repeat;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			repeat = ft_repeat(av[1][i]);
			while (repeat--)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
