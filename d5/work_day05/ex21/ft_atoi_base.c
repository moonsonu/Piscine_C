/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:03:13 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/04 21:04:38 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
		return (0);
}

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		findbase(char *base)
{
	int i;
	int b;
	int c;
	
	i = 0;
	b = ft_strlen(base);
	if (b <= 1)
		return (0);
	while (i < b- 1)
	{
		c = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] <= 31)
			return (0);
		while (c < b)
		{
			if (base[i] == base[c])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

void	print_nb(int nbr, char *base, int r)
{
	int n_b;
	int n;
	
	if (!findbase(base))
		return ;
	n_b = ft_strlen(base);
	n = nbr;
	if (n == 0)
	{
		if (r == 0)
			ft_putchar(base[0]);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		return ;
	}
	print_nb(n / n_b, base, r + 1);
	ft_putchar(base[n % numeric_base]);
}

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 1;
	if (str[0] == '-')
	{
		c = -1;
		a = 1;
	}
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
		{
			b = b * 10 + str[a] - '0';
			if (str[a + 1] <= 47 || str[a + 1] >= 58)
				return (b * c);
		}
		a++;
	}
	return (b * c);
}

int		ft_atoi_base(char *str, char *base)
{

