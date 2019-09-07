/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:01:28 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/07 11:14:12 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack *a)
{
	if (a->data[2] > a->data[1] && a->data[1] < a->data[0]
			&& a->data[2] < a->data[0])
		ft_putendl("sa");
	else if (a->data[2] > a->data[1] && a->data[1] < a->data[0]
			&& a->data[2] > a->data[0])
		ft_putendl("ra");
	else if (a->data[2] < a->data[1] && a->data[1] > a->data[0]
			&& a->data[2] < a->data[0])
		ft_putendl("sa\nra");
	else if (a->data[2] < a->data[1] && a->data[1] > a->data[0]
			&& a->data[2] > a->data[0])
		ft_putendl("rra");
	else if (a->data[2] > a->data[1] && a->data[1] > a->data[0])
		ft_putendl("sa\nrra");
}

int		find_indexa(int x, t_stack *b)
{
	int i;

	i = 0;
	while (i <= b->top)
	{
		if (b->data[i] == x)
			return (i);
		i++;
	}
	return (-1);
}

int		find_smallesta(t_stack *a)
{
	int i;
	int x;

	i = 0;
	x = a->data[0];
	while (i <= a->top)
	{
		if (x > a->data[i])
		{
			x = a->data[i];
			i = 0;
		}
		i++;
	}
	x = find_indexa(x, a);
	return (x);
}

void	ft_printrr(t_stack *a, t_stack *b, int i, char *in)
{
	if (!ft_strcmp(in, "rra"))
	{
		while (i >= 0)
		{
			ft_putendl("rra");
			ft_reverse(a, b, "rra");
			i--;
		}
	}
	else
	{
		while (i < a->top)
		{
			ft_putendl("ra");
			ft_rotate(a, b, "ra");
			i++;
		}
	}
	ft_putendl("pb");
	ft_push(a, b, "pb");
}

void	sort_5(t_stack *a, t_stack *b)
{
	int i;
	int x;
	int j;

	x = a->top - 2;
	j = x;
	while (x > 0)
	{
		i = find_smallesta(a);
		if (i > a->top / 2)
			ft_printrr(a, b, i, "ra");
		else
			ft_printrr(a, b, i, "rra");
		x--;
	}
	sort_3(a);
	while (j)
	{
		ft_putendl("pa");
		j--;
	}
}
