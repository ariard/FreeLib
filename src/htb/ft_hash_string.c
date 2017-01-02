/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 16:35:24 by ariard            #+#    #+#             */
/*   Updated: 2017/01/02 20:36:56 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

static void		ft_slct_chr2(char *s, t_pos *pos)
{
	pos->pos1 = s[0];
	pos->pos2 = s[2];
	pos->pos3 = s[4];
	pos->pos4 = s[6];
}

static void		ft_slct_chr(char *s, t_pos *pos)
{
	if (ft_strlen(s) <= 2)
	{
		pos->pos1 = s[0];
		pos->pos2 = s[0] + 5;
		pos->pos3 = s[0] - 5;
		pos->pos4 = s[0] + 10;
	}
	else if (ft_strlen(s) < 4)
	{
		pos->pos1 = s[0];
		pos->pos2 = s[1];
		pos->pos3 = s[2];
		pos->pos4 = s[2] - 5;
	}
	else if (ft_strlen(s) >= 4 && ft_strlen(s) < 8)
	{
		pos->pos1 = s[0];
		pos->pos2 = s[1];
		pos->pos3 = s[2];
		pos->pos4 = s[3];
	}
	else if (ft_strlen(s) > 8)
		ft_slct_chr2(s, pos);
}
	
int			ft_hash_string(const void *s, int size)
{
	t_pos	*pos;
	char	new[128];
	char	mask[64];
	int		c_key;

	if (!s)
		return (-1);
	pos = ft_memalloc(sizeof(t_pos));
	ft_slct_chr((char *)s, pos); 
	ft_bzero(mask, 64);
	ft_strcat(mask, ft_itoa_base((int)pos->pos1, 2, new));
	ft_strcat(mask, ft_itoa_base((int)pos->pos2, 2, new));
	ft_strcat(mask, ft_itoa_base((int)pos->pos3, 2, new));
	ft_strcat(mask, ft_itoa_base((int)pos->pos4, 2, new));	
	c_key = ft_atoi_base(mask, 2);
	c_key = c_key % size;
	return (c_key);
}
