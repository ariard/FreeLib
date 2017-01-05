/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_ins_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 23:57:53 by ariard            #+#    #+#             */
/*   Updated: 2017/01/05 15:51:38 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

int			ft_btree_ins_left(t_root *tree, t_btree *father,
	void *data, void *key)
{
	t_btree	**position;

	if (!father)
	{
		if (tree->size == 0)
			position = &tree->root;
		else
			return (-1);
	}
	if (father)
	{
		if (!father->left)
			position = &father->left;
		else
			return (-1);
	}
	ft_create_node(position, data, key);
	tree->size++;
	return (0);
}
