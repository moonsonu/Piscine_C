/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:19:49 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/05 21:29:54 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		ft_putchar(i - 1);
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i++])
	{
		ft_putstr[i - 1];
		ft_putchar('\n');
	}
}
