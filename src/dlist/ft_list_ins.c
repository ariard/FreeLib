/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_ins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 17:50:04 by ariard            #+#    #+#             */
/*   Updated: 2017/01/16 23:18:01 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"free.h"

void		ft_list_ins(t_dlist *node1, t_dlist *node2)
{
	if (!node2)
		return ;
	if (!node1)
	{
		node1 = node2;
		node2->previous = NULL;
		node2->next = NULL;
	}
	else
	{
		node2->next = node1->next;
		node2->previous = node1;
		node1->next = node2;
		if (node2->next)
			(node2->next)->previous = node2;
	}
}
