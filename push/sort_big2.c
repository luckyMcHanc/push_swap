/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 15:28:28 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/27 18:35:10 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>


int		find_smallest(t_stack *a)
{
	int i;
	int x;

	i = 0;
	x = a->data[0];
	while (a->data[i])
	{
		if (x > a->data[i])
		{
			x = a->data[i];
			i = 0;
		}
		i++;
	}
	return (x);
}

int		find_big(t_stack *a)
{
	int i;
	int x;

	i = 0;
	x = a->data[0];
	while (a->data[i])
	{
		if (x < a->data[i])
		{
			x = a->data[i];
		   i = 0;	
		}
		i++;
	}
	return (x);
}

int		chunk_size(t_stack *a)
{
	t_stack *tmp;
	int i;
	int x;
	int c;

	i = a->top;
	x = 0;
	tmp = newstack(a->top + 1);
	while (i != -1)
	{
		tmp->data[x] = a->data[i];
		x++;
		i--;
	}
	c = (find_big(tmp) - find_smallest(tmp)) / 5;
	free(tmp);
	return (c);
}

int		*chunk_arr(t_stack *a)
{
	int *chunk;
	int c;
	int i;
	int j;

	chunk = (int *)malloc(sizeof(int) * 7);
	c = chunk_size(a);
	j = c;
	i = 1;
	chunk[0] = find_smallest(a);
	while (i < 8)
	{
		j = chunk[i - 1] + c + 1; 
		chunk[i] = j;
		i++;
	}
	chunk[i] = '\0';
	i = 0;
	return (chunk);
}

void	sort_100(t_stack *a, t_stack *b)
{
	int *chunk;
	int i;
	int v;
	int top;
	int bot;

	i = 0;
	top = 0;
	bot = 0;
	chunk = chunk_arr(a);
	while (i < 8)
	{
		top = find_top(a, chunk[i], chunk[i + 1]);
		bot = find_bottom(a, chunk[i], chunk[i + 1]);
		if (top == -1 && bot == -1)
			i++;
		else if (top < bot || top == bot)
			ft_move(a, b, top, "ra");
		else
			ft_move(a, b, bot, "rra");
	}
}