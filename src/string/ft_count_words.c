/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 23:03:40 by ariard            #+#    #+#             */
/*   Updated: 2017/01/06 13:33:16 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

size_t		ft_count_words(char	*str, int (*is)(int c))
{
	size_t	len;
	int		in_word;

	len = 0;
	in_word = 0;
	(void)is;
	while (*str)
	{
		if ((is)((int)*str) == 0 && in_word == 0)
		{
			len++;
			in_word++;
		}
		if ((is)((int)*str) == 1)
			in_word = 0;
		str++;
	}
	return (len);
}
