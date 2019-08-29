/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:00:59 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/29 14:45:04 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		big_index(t_stack *a, int i)
{
	int x;

	x = 0;
	while (a->data[x])
	{
		if (a->data[x] == i)
			return (x);
		x++;
	}
	return (-1);
}

int		find_big_i(t_stack *a)
{
	int i;
	int j;
	int x;
	x = a->data[0];
	while (i <= a->top)
	{
		if (x < a->data[i])
		{
			x = a->data[i];
			i = 0;
		}
		i++;
	}
	j = big_index(a, x);
	return (j);
}

void	ft_moveb(t_stack *a, t_stack *b)
{
	int i;
	int big;

	i = b->top;
	big = find_big_i(b);
	if (big > i / 2)
	{
		while (i != big)
		{
			ft_putendl("rb");
			ft_rotate(a, b, "rb");
			i--;
		}
	}
	else if (big < i / 2)
	{
	//	if (big > 0)
	//	{
			while (big != 0)
			{
				ft_putendl("rrb");
				ft_rotate(a, b, "rrb");
				big--;
			}
	//	}
	//	else
	//	{
	//		ft_putendl("rrb");
	//		ft_rotate(a, b, "rrb");
	//	}
	}
	ft_putendl("pa");
	ft_push(a, b, "pa");
}

void	ft_move_back(t_stack*a, t_stack *b)
{
	int i;

	free(a);
	i = 0;
	while(b->data[i])
		ft_putendl(ft_itoa(b->data[i++]));
	ft_putendl("\n");
	a = newstack(b->top);
	while (b->top != -1)
	{
		ft_moveb(a, b);
	}
	i = 0;
	while (a->data[i])
		ft_putendl(ft_itoa(a->data[i++]));
//	ft_putnbr(big);
}
