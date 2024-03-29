/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 19:37:43 by ariard            #+#    #+#             */
/*   Updated: 2017/02/27 20:28:33 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

char		**ft_array_del(char **array, char *string)
{
	char	**new;
	char	**tmp;
	char	**tmp2;
	int		size;

	if (!array || !*array || !string)
		return (NULL);
	size = ft_array_size(array);
	new = ft_memalloc(size * sizeof(char *) + 1);
	tmp = new;
	tmp2 = array;
	while (*array)
	{
		if (ft_strcmp(*array, string) == 0)
			array++;
		else
			*new++ = ft_strdup(*array++);
	}
	*new = 0;
	ft_array_clean(tmp2);
	return (tmp);
}
