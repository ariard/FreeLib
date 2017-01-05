/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_ins_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 23:58:30 by ariard            #+#    #+#             */
/*   Updated: 2017/01/05 15:52:04 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

int			ft_btree_ins_right(t_root *btree_root, t_btree *father,
		void *data, void *key)
{
	t_btree	**position;

	if (!father)
	{
		if (btree_root->size == 0)
			position = &btree_root->root;
		else
			return (-1);
	}
	if (father)
	{
		if (!father->right)
			position = &father->right;
		else
			return (-1);
	}
	ft_create_node(position, data, key);
	btree_root->size++;
	return (0);
}
