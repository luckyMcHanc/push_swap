/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:55:11 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/25 16:43:21 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pu(t_stack *a, t_stack *b)
{
	int c;

	c = 0;
	if (isempty(b) == 0)
	{
		addstack(a, b->data[b->top]);
		b->top = b->top - 1;
	}
}

void	ft_push(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strcmp(instr, "pa") == 0)
		ft_pu(a, b);
	else if (ft_strcmp(instr, "pb") == 0)
		ft_pu(b, a);
}

void	ft_swapf(t_stack *a)
{
	int tmp;

	tmp = a->data[a->top - 1];
	a->data[a->top - 1] = a->data[a->top];
	a->data[a->top] = tmp;
}

void	*ft_swab(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strcmp(instr, "sa") == 0)
	{
		if (isempty(a) == 0)
			ft_swapf(a);
	}
	else if (ft_strcmp(instr, "sb") == 0)
	{
		ft_putnbr(b->top);
		if (isempty(b) == 0)
			ft_swapf(b);
	}
	else if (ft_strcmp(instr, "ss") == 0)
	{
		if (isempty(a) == 0 && isempty(b) == 0)
		{
			ft_swapf(a);
			ft_swapf(b);
		}
	}
	return (a);
}
