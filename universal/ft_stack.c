/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:56:01 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/25 16:52:42 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack		*newstack(int cap)
{
	t_stack *newst;

	newst = (t_stack *)malloc(sizeof(t_stack) * cap);
	newst->max = cap;
	newst->top = -1;
	newst->data = (int *)malloc(sizeof(int) * cap);
	return (newst);
}

int			isempty(t_stack *a)
{
	return (a->top == -1);
}

int			isfull(t_stack *a)
{
	return (a->top == a->max - 1);
}

void		removestack(t_stack *a, int i)
{
	if (!isempty(a))
	{
		while (i < a->top)
		{
			a->data[i] = a->data[i + 1];
			i++;
		}
	   a->top--;
	}
}

void		*addstack(t_stack *a, int x)
{
	if (isfull(a) == 0)
	{
		a->data[++a->top] = x;
	}
	return (a);
}
