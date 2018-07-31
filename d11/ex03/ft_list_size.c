/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:51:20 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/11 19:33:32 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	if (begin_list == 0)
		return (0);
	else
	{
		while (begin_list->next != 0)
		{
			count++;
			begin_list = begin_list->next;
		}
		return (count + 1);
	}
}
