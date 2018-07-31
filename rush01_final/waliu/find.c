/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:50:26 by waliu             #+#    #+#             */
/*   Updated: 2017/07/09 23:40:09 by waliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
char	cal_sudoku(char grid[9][9], int p);
int		find_row(char grid[9][9], int x, int y, char val);
int		find_col(char grid[9][9], int x, int y, char val);
int		find_sqr(char grid[9][9], int x, int y, char val);
void	ft_print_results(char grid[9][9]);
char	cal_sudoku(char grid[9][9], int p)
{
	int x;
	int y;
	char val;

	val = 1 + '0';
	x = p / 9;
	y = p % 9;
	if (p == 81)
		return(1);
	if (grid[x][y] != '.' && find_row(grid, x, y, grid[x][y]) 
			&& find_col(grid, x, y, grid[x][y])
			&& find_sqr(grid, x, y, grid[x][y]))
		return (cal_sudoku(grid, p + 1));
	else if (grid[x][y] == '.')
	{
		while (val < (10 + '0'))
		{
			grid[x][y] = val;
			if (find_row(grid, x, y, val) && find_col(grid, x, y, val)
				   	&& find_sqr(grid, x, y, val))
			{
				if (cal_sudoku(grid, p + 1))
					return (1);
			}
			val++;
		}
		if (val == (10 + '0'))
			grid[x][y] = '.';
	}
	return (0);
}

int		find_row(char grid[9][9], int x, int y, char val)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i != y && grid[x][i] == val)
			return (0);
		i++;
	}
	return (1);
}

int		find_col(char grid[9][9], int x, int y, char val)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i != x && grid[i][y] == val)
			return (0);
		i++;
	}
	return (1);
}

int		find_sqr(char grid[9][9], int x, int y, char val)
{
	int grid_x;
	int grid_y;
	int i;
	int j;

	grid_x = x / 3 * 3;
	grid_y = y / 3 * 3;
	i = grid_x;
	while (i < grid_x + 3)
	{
		j = grid_y;
		while (j < grid_y + 3)
		{
			if (i != x && j != y && grid[i][j] == val)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_results(char grid[9][9])
{
	int x;
	int y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			ft_putchar(grid[y][x]);
			if (x < 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
