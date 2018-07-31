/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:58:15 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/16 17:16:49 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;
	int alpha[26] = {0};

	j = 0;
	while (s2[j] != '\0')
	{
		i = 0;
		while (s1[i] != '\0')
		{
			if (alpha[s1[i] - 97] == 0)
			{
				write(1, &s1[i], 1);
				alpha[s1[i] - 97] = 1;
			}
			i++;
		}

		if (alpha[s2[j] - 97] == 0)
		{
			write(1, &s2[j], 1);
			alpha[s2[j] - 97] = 1;
		}
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
