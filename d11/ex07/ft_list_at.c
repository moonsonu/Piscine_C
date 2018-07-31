/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:53:36 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/12 21:32:10 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list == 0)
		return (0);
	else
	{
		while (nbr > 0)
		{
			begin_list = begin_list->next;
			nbr--;
			if (begin_list == 0)
				return (0);
		}
	}
	return (begin_list);
}
