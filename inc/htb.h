/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htable..h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 17:20:31 by ariard            #+#    #+#             */
/*   Updated: 2017/01/03 18:39:54 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HTABLE_H
# define HTABLE_H

# include "dlist.h"

typedef struct		s_cht
{
	int				capacity;
	int				size;
	int				(*h)(const void *key, int size);
	t_dlist			**head;
}					t_cht;

typedef struct		s_pos
{
	char			pos1;
	char			pos2;
	char			pos3;
	char			pos4;
}					t_pos;

/*
** Hash a string and return a key
*/

int					ft_hash_string(const void *s, int size);

/*
** Init a chained hash table
*/

void				ft_cht_init(t_cht *htb, int capacity,
		int (*h)(const void *key, int size), void (*destroy)(void *data));

/*
** Destroy a chained hash table
*/

void				ft_cht_destroy(t_cht *htb, void (*destroy)(void *data));

/*
** Check if data already exists in a chained hash table
*/

void				*ft_cht_lookup(const t_cht *htb, void *data,
		int (*match)(const char *key1, const char *key2));

/*
** Insert data in a chained hash table if it doesn't already exist
*/

void				ft_cht_insert(t_cht *htb, void *data, void *key,
		int (*match)(const char *key1, const char *key2));

/*
** Remove data from a chained hash table
*/

void				*ft_cht_remove(t_cht *htb, void *data,
		int (*match)(const char *key1, const char *key2));

#endif
