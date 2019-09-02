/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:00:59 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/02 11:45:16 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_index(int x, t_stack *b)
{
	int i;

	i = 0;
	while (b->data[i])
	{
		if (b->data[i] == x)
			return (i);
		i++;
	}
	return (-1);
}

int		find_big_i(t_stack *b)
{
	int i;
	int x;

	i = 0;
	x = b->data[0];
	while (i <= b->top)
	{
		if (x < b->data[i])
			x = b->data[i];
		i++;
	}
	i = find_index(x, b);
	return (i);
}

void	ft_revmid(t_stack *a, t_stack *b, int x)
{
	int i;

	i = 0;
	while (i <= x)
	{
		ft_putendl("rrb");
		ft_reverse(a, b, "rrb");
		i++;
	}
}

void	ft_moveb(t_stack *a, t_stack *b)
{
	int i;
	int x;
	int mid;

	i = 0;
	x = find_big_i(b);
	mid = b->top / 2;
	if (x > mid || x == mid)
	{
		while (x < b->top)
		{
			ft_putendl("rb");
			ft_rotate(a, b, "rb");
			x++;
		}
	}
	else if (x < mid)
		ft_revmid(a, b, x);
	ft_putendl("pa");
	ft_push(a, b, "pa");
}

void	ft_move_back(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	while (b->top > -1)
		ft_moveb(a, b);
}
