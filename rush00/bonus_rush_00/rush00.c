/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgollwit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:04:46 by zgollwit          #+#    #+#             */
/*   Updated: 2017/07/02 14:19:27 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	printer(char ch, int num_chars);
void	ft_line(int num_chars);
void	ft_middle_line(int num_chars);

void	rush(int x, int y)
{
	int columns;
	int counter;

	if (x > 0 && y > 0)
	{
		columns = x;
		counter = y;
		ft_line(columns);
		while (counter > 2)
		{
			ft_middle_line(columns);
			counter--;
		}
		if (y >= 2)
		{
			ft_line(columns);
		}
	}
}

void	printer(char ch, int num_chars)
{
	while (num_chars > 2)
	{
		ft_putchar(ch);
		num_chars--;
	}
}

void	ft_line(int num_chars)
{
	ft_putchar('o');
	printer('-', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_middle_line(int num_chars)
{
	ft_putchar('|');
	printer(' ', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}
