/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dublicate_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:56:45 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/07 10:44:42 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_strexist(t_stack *a, int c, int i)
{
	int x;

	x = 0;
	while (x < i)
	{
		if (a->data[x] == c)
		{
			ft_putendl_fd("Error", 2);
			return (1);
		}
		x++;
	}
	return (0);
}

int		isdublicate_a(t_stack *a)
{
	int i;

	i = 1;
	while (i <= a->top)
	{
		if (ft_strexist(a, a->data[i], i))
			return (0);
		i++;
	}
	return (1);
}
