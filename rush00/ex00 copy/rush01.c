/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgollwit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 20:03:18 by zgollwit          #+#    #+#             */
/*   Updated: 2017/07/01 20:03:20 by zgollwit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	printer(char ch, int num_chars);
void	ft_first_line(int num_chars);
void	ft_middle_line(int num_chars);
void	ft_last_line(int num_chars);

void	rush_01(int x, int y)
{
	
	int counter;

	if (x > 0 && y > 0)
	{
		
		counter = y;
		ft_first_line(x);
		while (counter > 2)
		{
			ft_middle_line(x);
			counter--;
		}
		if (y >= 2)
		{
			ft_last_line(x);
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
	ft_putchar('/');
	printer('*', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_middle_line(int num_chars)
{
	ft_putchar('*');
	printer(' ', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ft_last_line(int num_chars)
{
	ft_putchar('\\');
	printer('*', num_chars);
	if (num_chars >= 2)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}
