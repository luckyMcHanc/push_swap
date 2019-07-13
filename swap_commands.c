/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:55:11 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/13 14:48:12 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapf(t_stack *a)
{
	int tmp;

	tmp = (int)malloc(sizeof(int) * 2);
	tmp = a->data[a->top - 1];
	a->data[a->top - 1] = a->data[a->top];
	a->data[a->top] = tmp;
}

void	*ft_swab(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strcmp(instr, "sa") == 0)
	{
		if (isEmpty(a) == 0)
			ft_swapf(a);
	}
	else if (ft_strcmp(instr, "sb") == 0)
	{
		ft_putnbr(b->top);
		if (isEmpty(b) == 0)
			ft_swapf(b);
	}
	else if (ft_strcmp(instr, "ss") == 0)
	{
		if (isEmpty(a) == 0 && isEmpty(b) == 0)
		{
			ft_swapf(a);
			ft_swapf(b);
		}
	}
	return (a);
}
