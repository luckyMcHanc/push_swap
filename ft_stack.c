/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:56:01 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/13 14:40:37 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*newstack(int cap)
{
	t_stack *newst;

	newst = (t_stack *)malloc(sizeof(t_stack) * cap);
	newst->max = cap;
	newst->top = -1;
	newst->data = (int *)malloc(sizeof(int) * cap);
	return (newst);
}

void		printStack(t_stack *a)
{
	int i;

	i = 0;

	while (i <= a->top)
	{
		ft_putnbr(a->data[i]);
		ft_putstr(" ");
		i++;
	}
}

int			isEmpty(t_stack *a)
{
	return (a->top == -1);
}

int			isFull(t_stack *a)
{
	return (a->top == a->max - 1);
}

void		*addstack(t_stack *a, int x)
{
	if (isFull(a) == 0)
	{
		a->data[++a->top] = x;
	}
	return (a);
}
