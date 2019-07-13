/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:13:43 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/13 14:48:59 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pu(t_stack *a, t_stack *b)
{
	int c;

	c = 0;
	if (isEmpty(b) == 0)
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
