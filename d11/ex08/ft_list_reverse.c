/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:16:05 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/12 22:00:47 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *p;
	t_list *q;
	t_list *r;

	if (*begin_list != 0)
	{
		p = *begin_list;
		q = p->next;
		while (q != 0)
		{
			r = q->next;
			q->next = p;
			p = q;
			q = r;
		}
		(*begin_list)->next = 0;
		*begin_list = p;
	}
}
