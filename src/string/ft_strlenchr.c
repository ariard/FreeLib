/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:10:54 by ariard            #+#    #+#             */
/*   Updated: 2017/01/17 17:30:18 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

size_t		ft_strlenchr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s++ != c)
		i++;
	return (i);
}
