/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:36:32 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/12 14:24:57 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rot(t_stack *a)
{
	int tmp;
	int count;

	count = 0;
	if (isEmpty(a) == 0)
	{
		tmp = a->data[0];
		while (count < a->top)
		{
			a->data[count] = a->data[count + 1];
			count++;
		}
		a->data[count] = tmp;
	}
}

void	ft_rotate(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strcmp(instr, "ra") == 0)
		ft_rot(a);
	else if (ft_strcmp(instr, "rb"))
		ft_rot(b);
	else
	{
		ft_rot(a);
		ft_rot(b);
	}
}
