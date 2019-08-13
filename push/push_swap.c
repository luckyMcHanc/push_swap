/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:29:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/13 13:06:39 by lmhlanga         ###   ########.fr       */
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
			sort = 0;
		i++;
	}
	return (sort);
}

void	push_swap(t_stack *a)
{
	if (a->top == 2)
		sort_3(a);
	/*else if (a->top == 4)
		sort_5(a);
	else if (a->top == 99)
		sort_100(a);
	else if (a->top == 499)
		sort_500(a);*/
}

int		main(int c, char **argv)
{
	t_stack *a;
	int		i;

	i = 1;
	if (c == 1)
		ft_putendl("Error: Too few Arguments passed!");
	else
	{
		a = newstack(c);
		i = c - 1;
		if (isdublicate(argv))
		{
			if (adder(a, argv, i))
				if (!issorted(a))
					push_swap(a);
		}
		else
			ft_putendl("Error: May contain dublicate values!");
	}
	return (0);
}
