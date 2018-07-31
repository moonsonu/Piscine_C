/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:46:26 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/11 19:34:48 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *enode;

	enode = *begin_list;
	if (enode == '\0')
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (enode->next)
		enode = enode->next;
	enode->next = ft_create_elem(data);
}
