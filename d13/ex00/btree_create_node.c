/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 20:22:49 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/13 20:27:42 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_btree	*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = malloc(sizeof(t_btree));
	tmp->item = item;
	tmp->right = NULL;
	tmp->left = NULL;
	return (tmp);
}
