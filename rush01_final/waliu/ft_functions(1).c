/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:00:23 by waliu             #+#    #+#             */
/*   Updated: 2017/07/09 22:48:30 by waliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_errors(char **row);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *c);

int check_errors(char **row)
{	
	int i;
	int j;

	i = 0;
	while( i < 9 )
	{
		j = 0;
		if(ft_strlen(row[i]) != 9)
			return (0);
		while (j < 9)
		{
	   		if ((row[i][j] <= '1' && row[i][j] >= '9') && row[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *row)
{
	int i;
	i = 0;	
	while(row[i] != 0)
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_putstr(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}
