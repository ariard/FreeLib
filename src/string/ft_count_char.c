/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:30:49 by ariard            #+#    #+#             */
/*   Updated: 2017/01/17 17:34:16 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

int			ft_count_char(char *str, int (*is)(int))
{
	int		nbr;

	nbr = 0;
	while (*str)
	{
		if ((is)(*str) == 1)
			nbr++;
		str++;
	}
	return (nbr);
}