/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:29:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/22 17:45:34 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		positiont(t_stack *a, int chunk)
{
	int i;

	i = 0;
	while (a->data[i])
	{
		if (a->data[i] >= chunk && a->data[i] <= chunk + 20)
			return (i);
		i++;
	}
	return (-1);

}

int		positionb(t_stack *a, int chunk)
{
	int i;
	i = a->top;
	while (a->data[i])
	{
		if(a->data[i] >= chuck && a->dta[i] <= chunk + 20)
			return (i);
		i++;
	}
}

void	push_swap(t_stack *a, t_stack *b)
{
	int post;
	int posb;
	int chunk;
	int div;

	chunk = 0;
	div = a->top / 2;
	post = positiont(a, chunk);
	posb = positionb(a, chunk);
	if (post )
}

int		main(int c, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		i;

	i = 1;
	if (c == 1)
		ft_putendl("Error: Too few Arguments passed!");
	else
	{
		a = newstack(c);
		b = newstack(c);
		i = c - 1;
		if (isdublicate(argv))
		{
			if (adder(a, argv, i))
				push_swap(a, b);
		}
		else
			ft_putendl("Error: May contain dublicate values!");
	}
	return (0);
}
