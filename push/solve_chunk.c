/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_chunk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:27:04 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/28 15:48:53 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_bottom(t_stack *a, int s, int end)
{
	int i;
	int x;

	i = 0;
	x = (a->top + 1) / 2;
	if (x % 2 != 0)
		x = x + 1;
	while (i < x)
	{
		if (a->data[i] >= s && a->data[i] <= end)
			return (i);
		i++;
	}
	return (-1);
}

int 	find_top(t_stack *a, int s, int end)
{
	int x;
	int i;
	int y;

	x = 0;
	i = a->top;
	y = (a->top + 1) / 2;
	if (y % 2 != 0)
		y = y + 1;
	while (i > y)
	{
		if (a->data[i] >= s && a->data[i] <= end)
			return (x);
		i--;
		x++;
	}
	return (-1);
}

void	ft_move(t_stack *a, t_stack *b, int v, char *in)
{
	int i;

	i = 0;
	if (!ft_strcmp(in, "ra"))
	{
		while (i < v)
		{
			ft_putendl(in);
			ft_rotate(a, b, in);
			i++;
		}
	}
	else
	{
		while (i <= v)
		{
			ft_putendl(in);
			ft_reverse(a, b, in);
			i++;
		}
	}
	ft_putendl("pb");
	ft_push(a, b, "pb");
}
