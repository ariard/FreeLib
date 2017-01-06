/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:43:59 by ariard            #+#    #+#             */
/*   Updated: 2017/01/06 14:02:15 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

char		*ft_strchrcpy(char *dst, const char *src, char c)
{
	while (*src && *src != c)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}
