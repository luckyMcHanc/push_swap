/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:29:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/01 15:18:06 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		issorted(t_stack *a)
{
	int sort;
	int i;

	i = 0;
	sort = 0;
	while (i < a->top)
	{
		if (a->data[i] > a->data[i + 1])
			sort = 1;
		else
			return (0);
		i++;
	}
	return (sort);
}

void	push_swap(t_stack *a, t_stack *b)
{
	if (a->top == 2)
		sort_3(a);
	else if (a->top == 4)
		sort_5(a);
	else if (a->top > 4)
		sort_100(a, b);
}

int		main(int c, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		i;

	i = 1;
	if (c == 1)
		ft_putendl("Error");
	else
	{
		a = newstack(c);
		b = newstack(c);
		i = c - 1;
		if (isdublicate(argv))
		{
			if (adder(a, argv, i))
				if (!issorted(a))
					push_swap(a, b);
		}
		else
			ft_putendl("Error");
	}
	return (0);
}
