/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:44:53 by ariard            #+#    #+#             */
/*   Updated: 2017/01/03 14:48:45 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

char			**ft_array_strdup(char **array)
{
	int			size;
	char		**tmp;
	char		**new;

	size = 0;
	tmp = array;
	while (*tmp++)
		size++;
	new = ft_memalloc(sizeof(char *) * (size + 1));
	tmp = new;
	while (*array)
		*new++ = ft_strdup(*array++);
	*new = 0;
	return (tmp);
}
