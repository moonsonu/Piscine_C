/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 17:50:06 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/16 18:26:45 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			j++;
	}
	if (s1[i] == '\0')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		if (wdmatch(av[1], av[2]))
			write(1, av[1], ft_strlen(av[1]));
	write(1, "\n", 1);
	return (0);
}
