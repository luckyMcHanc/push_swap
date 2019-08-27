/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 15:28:28 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/27 11:55:16 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

	i = a->data[0];
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

	chunk = (int *)malloc(sizeof(int) * 6);
	c = chunk_size(a);
	j = c;
	i = 1;
	chunk[0] = c;
	while (i < 5)
	{
		j = j + c + 1; 
		chunk[i] = j;
		i++;
	}
	chunk[i] = '\0';
	return (chunk);
}

void	sort_100(t_stack *a, t_stack *b)
{
	int *chunk;
	int i = 0;

	chunk = chunk_arr(a);
	
	while (i < 5)
		ft_putnbr(chunk[i++]);
}
