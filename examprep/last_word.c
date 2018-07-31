/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:30:36 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/16 15:42:44 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		space(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			if (str[i + 1] >= 33 && str[i + 1] <= 122)
				j = i;
		i++;
	}
	return (j);
}

void	last_prt(char *str)
{
	int j;

	j = space(str);
	while (str[j + 1] != '\0' && str[j + 1] != ' ' && str[j + 1] != '\t')
	{
		if (str[j + 1] != ' ' || str[j + 1] != '\t')
			write(1, &str[j + 1], 1);
		j++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		last_prt(&av[1][i]);
	}
	write(1, "\n", 1);
	return (0);
}
