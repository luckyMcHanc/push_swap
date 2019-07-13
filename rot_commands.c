/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:36:32 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/13 14:51:05 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev(t_stack *a)
{
	int tmp;
	int count;

	count = 0;
	if (isEmpty(a) == 0)
	{
		while (count < a->top)
		{
			count++;
		}
		tmp = a->data[count];
		while (count > 0)
		{
			a->data[count] = a->data[count - 1];
			count--;
		}
		a->data[0] = tmp;
	}
}

void	ft_reverse(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strcmp(instr, "rra") == 0)
		ft_rev(a);
	else if (ft_strcmp(instr, "rrb"))
		ft_rev(b);
	else
	{
		ft_rev(a);
		ft_rev(b);
	}
}

void	ft_rot(t_stack *a)
{
	int tmp;
	int c;

	c = 0;
	if (isEmpty(a) == 0)
	{
		tmp = a->data[a->data[top]];
		while (c < a->top)
		{
			a->data[c] = a->data[c + 1];
			c++;
		}
		a->data[c] = tmp;
	}
}

void	ft_rotate(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strcmp(instr, "ra") == 0)
		ft_rot(a);
	else if (ft_strcmp(instr, "rb") == 0)
		ft_rot(b);
	else
	{
		ft_rot(a);
		ft_rot(b);
	}
}
