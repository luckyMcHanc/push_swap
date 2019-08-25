/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:02:03 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/25 17:33:24 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
/*
int			check_exist(int a, int *b)
{
	int i;
	
	i = 0;
	while (b[i])
		if (a == b[i++])
			return (1);
	return (-1);
}

int		find_num_top(t_stack *a, int chunk, int *hold)
{
	int i;
	int h;

	i = 0;
	h = a->top / 2;
	while (i <= h)
	{
		if (a->data[i] >= chunk - 20 && a->data[i] < chunk)
			if (!check_exist(a->data[i], hold))
				return (i);
		i++;
	}
	return (-1);
}

int		find_num_bottom(t_stack *a, int chunk, int *hold)
{
	int i;
	int x;

	i = 99;
	x = 0;
	while (i > a->top / 2)
	{
		if (a->data[i] >= chunk - 20 && a->data[i] < chunk)
			if (!check_exist(a->data[i], hold))
				return (x);
		i++ ;
		x++;
	}
	return (0);
}
*/
void	ft_print(int v, char *s, t_stack *a, int n, t_stack *b)
{
	int i = 0;
	while (i < n - 1)
	{
		ft_putendl(s);
		if (ft_strcmp("ra", s) == 0)
			ft_rot(a);
		else
			ft_rev(a);
		i++;
	}
	ft_putendl("pb");
	ft_pu(a, b);
}

int		sort_list(t_stack *a)
{
	int *tmp;
	int i;
	int tmpv;
	int j;

	tmpv = 0;
	j = 0;
	tmp = (int *)malloc(sizeof(int) * a->top + 1);
	while(a->data[i])
	{
		tmp[i] = a->data[i];
		i++;
	}
	i = 0;
	while (j < a->top)
	{
		while (i < a->top - 1)
		{
			if (tmp[i]	> tmp[i + 1])
			{
				tmpv = tmp[i];
				tmp[i] = tmp[i + 1];
				tmp[i + 1] = tmpv;
			}
			i++;
		}
		j++;
	}
	printf("%d\n", tmp[2]);
	return (tmp[i / 2]);
}

void	sort_100(t_stack *a)
{
	int mid;
	int i;
	t_stack *b;

	i = 0;
	b = newstack(a->top); 
	mid = sort_list(a);
/*	while (i <= a->top)
	{
		if (a->data[i] > mid)
		{
			if (i < a->top / 2)
				ft_print(a->data[i], "ra", a, i, b);
			else
				ft_print(a->data[i], "rra", a, i, b);
		}
		i++;
	}*/
}
