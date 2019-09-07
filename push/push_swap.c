/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:29:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/07 11:37:45 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		issorted(t_stack *a)
{
	int sort;
	int i;

	i = 0;
	sort = 0;
	if (a->top == 0)
		return (1);
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
	if (a->top == 0)
		return ;
	if (a->top == 1)
		ft_putendl("sa");
	else if (a->top == 2)
		sort_3(a);
	else if (a->top <= 9)
		sort_5(a, b);
	else
		sort_100(a, b);
}

int		main(int c, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		i;

	i = c - 2;
	if (c == 1 || !ft_strcmp(argv[1], ""))
		return (0);
	if (c == 2)
	{
		argv = fix_strl(argv[1]);
		i = newlen(argv);
	}
	else
		argv = removearg(argv);
	if (i != -1)
	{
		a = newstack(i + 2);
		b = newstack(i + 2);
		if (adder(a, argv, i))
			if (isdublicate_a(a))
				if (!issorted(a))
					push_swap(a, b);
	}
	return (0);
}
