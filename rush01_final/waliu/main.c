/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:46:19 by waliu             #+#    #+#             */
/*   Updated: 2017/07/09 23:14:38 by waliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_errors(char **row);
void	ft_putstr(char *c);
char	cal_sudoku(char grid[9][9], int p);
void	ft_print_results(char grid[9][9]);

int main (int argc, char **argv)
{
	int i;
	int j;
	i = 1;
	char c[9][9];
	
	while(i <= 9 && check_errors(&argv[1]))
	{
		j = 0;
		while (j < 9)
		{
			c[i-1][j]= argv[i][j];
			j++;
		}
		i++;
	}
	if (argc==10)
	{
		if (check_errors(&argv[1]))
		{			
			cal_sudoku(c, 0);
			ft_print_results(c);
		}
		else
			ft_putstr("error");
	}
	else 
		ft_putstr("error");
	return (0);
}
