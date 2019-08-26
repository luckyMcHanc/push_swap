/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 15:28:28 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/26 17:06:13 by lmhlanga         ###   ########.fr       */
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
	ft_putnbr(x);
	ft_putstr("\n");
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
	ft_putnbr(x);
	return (x);
}

void	chuck_size(t_stack *a, t_stack *b)
{
	t_stack *tmp;
	int i;
	int x;
	int c;
	int j;

	i = a->top;
	x = 0;
	c = 0;
	j = 1;
	tmp = newstack(a->top + 1);
	while (i != -1)
	{
		tmp->data[x] = a->data[i];
		x++;
		i--;
	}
	c = (find_big(tmp) - find_smallest(tmp)) / 5;
	free(tmp);
	chunk[0] = c;
	while (j < 5)
	{
		chunk[j] = ch + 1;
		ch = c + ch;
		j++;
	}

}
