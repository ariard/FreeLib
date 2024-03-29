/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <ariard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 13:46:37 by ariard            #+#    #+#             */
/*   Updated: 2017/02/14 14:43:31 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void		ft_tabdel(char **arg)
{
	char	**temp;

	temp = arg;
	while (*arg)
		ft_strdel(&(*arg++));
	free(temp);
}
