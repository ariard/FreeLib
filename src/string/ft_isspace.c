/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 15:16:24 by ariard            #+#    #+#             */
/*   Updated: 2016/12/31 15:20:32 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

int			ft_isspace(int c)
{
	return (((c == 9) || (c == 10) || (c == 11) || (c == 12) || (c == 13) ||
				(c == 32)) ? 1 : 0);
}
