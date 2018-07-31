/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgollwit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:04:46 by zgollwit          #+#    #+#             */
/*   Updated: 2017/07/01 19:32:37 by zgollwit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	printer(char ch, int num_chars);
void	ft_first_line(int num_chars);
void	ft_middle_line(int num_chars);
void	ft_last_line(int num_chars);

void	rush_04(int x, int y)
{
	int columns;
	int counter;

	if (x > 0 && y > 0)
	{
		columns = x;
		counter = y;
		ft_first_line(columns);
		while (counter > 2)
		{
			ft_middle_line(columns);
			counter--;
		}
		if (y >= 2)
		{
			ft_last_line(columns);
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

void	ft_first_line(int num_chars)
{
	ft_putchar('A');
	printer('B', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_middle_line(int num_chars)
{
	ft_putchar('B');
	printer(' ', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_last_line(int num_chars)
{
	ft_putchar('C');
	printer('B', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}
