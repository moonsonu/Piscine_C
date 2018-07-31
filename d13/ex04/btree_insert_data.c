/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 20:56:40 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/13 21:55:53 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	btree	*t;

	t = *root;
	if (t == 0)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, t->item) < 0)
	{
		if (t->left == 0)
			t->next = btree_create_node(item);
		else
			(btree_insert_data(&(t->left), item, cmpf));
	}
	else
	{
		if (t->right == 0)
			t->next = btree_create_node(item);
		else
			(btree_insert_data(&(t->right), item, cmpf));
	}
}
