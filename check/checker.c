/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:17:51 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/04 15:29:36 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		issorted(t_stack *a)
{
	int i;
	int sort;

	i = 0;
	sort = -1;
	if (a->top != -1)
	{
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
	return (0);
}

int		checker(t_stack *a, t_stack *b)
{
	char *instr;

	while (get_next_line(0, &instr) == 1)
	{
		if (ft_strcmp(instr, "sa") == 0 || ft_strcmp(instr, "sb") == 0
				|| ft_strcmp(instr, "ss") == 0)
			ft_swab(a, b, instr);
		else if (ft_strcmp(instr, "pa") == 0 || ft_strcmp(instr, "pb") == 0)
			ft_push(a, b, instr);
		else if (ft_strcmp(instr, "ra") == 0 || ft_strcmp(instr, "rb") == 0
				|| ft_strcmp(instr, "rr") == 0)
			ft_rotate(a, b, instr);
		else if (ft_strcmp(instr, "rra") == 0 || ft_strcmp(instr, "rrb") == 0
				|| ft_strcmp(instr, "rrr") == 0)
			ft_reverse(a, b, instr);
		else
		{
			ft_putendl_fd("Error", 2);
			return (0);
		}
		free(instr);
	}
	issorted(a) ? ft_putendl("OK") : ft_putendl("KO");
	return (0);
}

int		main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		i;

	i = argc - 2;
	if (argc == 1 || ft_strcmp("", argv[1]) == 0)
		return (0);
	else if (argc == 2 && !argv[2])
	{
		argv = fix_strl(argv[1]);
		i = newlen(argv);
	}
	else
		argv = removearg(argv);
	a = newstack(i + 2);
	b = newstack(i + 2);
	if (isdublicate(argv))
	{
		if (adder(a, argv, i))
			checker(a, b);
	}
	else
		ft_putendl_fd("Error", 2);
	return (0);
}
