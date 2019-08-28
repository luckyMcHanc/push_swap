/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:00:59 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/28 17:28:01 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h> 

int		find_big_i(t_stack *a)
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
	return (i);
}

void	ft_moveb(t_stack *a, t_stack *b, int big)
{
	
}

void	ft_move_back(t_stack*a, t_stack *b)
{
	int big;
	int i;

	free(a);
	i = 0;
	a = newstack(b->top);
	while (b->data[i])
	{
		big = find_big_i(b);
		ft_moveb(a, b, big);
		i++;
	}
	i = 0;
	while (a->data[i])
	   printf("%d\n", a->data[i++]);	
	printf("%d\n", big);
	free(a);
	free(b);
}
