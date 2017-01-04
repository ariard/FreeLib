/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:44:53 by ariard            #+#    #+#             */
/*   Updated: 2017/01/04 18:56:08 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

static size_t	ft_count_words(char  **s)
{
	size_t		len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
		
char			**ft_array_strdup(char **array)
{
	int			size;
	char		**tab;
	char		**tmp;

	size = ft_count_words(array); 
	tab = ft_memalloc(size * sizeof(char *) + 1);
	tmp = tab;
	while (*array)
		*tab++ = ft_strdup(*array++);
	*tab = 0;	
	return (tmp);
}
