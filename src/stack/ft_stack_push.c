/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:03:45 by ariard            #+#    #+#             */
/*   Updated: 2017/01/21 23:04:55 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void		ft_stack_push(t_stack **stack, void *data,
		t_stack *(*create)(void *))
{
	ft_list_push_front(stack, data, create);
}
