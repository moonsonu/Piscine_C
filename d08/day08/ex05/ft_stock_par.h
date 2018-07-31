/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:59:56 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/06 10:46:17 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

char	**ft_split_whitespaces(char *str);
typedef struct s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
} t_stock_par;
void	ft_show_tab(struct s_stock_par *par);
#endif
