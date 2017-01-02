/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cht_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 19:55:05 by ariard            #+#    #+#             */
/*   Updated: 2017/01/02 20:00:56 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void		ft_cht_insert(t_cht *htb, void *data, void *key,
		int (*match)(const char *key1, const char *key2))
{
	int		bucket;

	if (ft_cht_lookup(htb, data, match))
		return ;
	bucket = htb->h(data, htb->capacity);
	ft_list_push_back(&htb->head[bucket], data, key);
	htb->size++;
}
