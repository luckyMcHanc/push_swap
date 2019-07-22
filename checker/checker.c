/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:17:51 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/22 15:08:20 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		issorted(t_stack *a)
{
	int i;
	int sort;

	i = 0;
	sort = -1;
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
		else if (ft_strcmp(instr, "exit") == 0)
			break ;
		else
			ft_putendl("Error: invalid input");
		free(instr);
	}
	issorted(a) ? ft_putendl("OK") : ft_putendl("KO");
	return (0);
}

int		adder(t_stack *a, char **s, int i)
{
	int hold;

	hold = 0;
	while (i)
	{
		if ((hold = ft_atoi(s[i])))
			addstack(a, hold);
		else
		{
			ft_putendl("Error: May contain values which are not intergers!");
			free(a);
			return (0);
		}
		i--;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		i;

	i = 1;
	if (argc < 2)
		ft_putendl("Error: No arguments passed");
	else
	{
		a = newstack(argc);
		b = newstack(argc);
		while (argv[i])
			i++;
		i--;
		if (isdublicate(argv))
		{
			if (adder(a, argv, i))
				checker(a, b);
		}
		else
			ft_putendl("Error: May Contain dublicate values!");
	}
	return (0);
}
