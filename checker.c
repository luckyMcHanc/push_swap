/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:17:51 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/12 14:09:05 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		checker(t_stack *a, t_stack *b)
{
	char *instr;

	while (get_next_line(0, &instr) == 1)
	{
		if (ft_strcmp(instr, "sa") == 0 || ft_strcmp(instr, "sb") == 0 || ft_strcmp(instr, "ss") == 0)
			ft_swab(a, b, instr);
		else if (ft_strcmp(instr, "pa") == 0 || ft_strcmp(instr, "pb") == 0)
			ft_push(a, b, instr);
		else if (ft_strcmp(instr, "ra") || ft_strcmp(instr, "rb") || ft_strcmp(instr, "rr"))
			ft_rotate(a, b, instr);
		/*else if (ft_strcmp(instr, "rra") || ft_strcmp(instr, "rrb") || ft_strcmp(instr, "rrr"))
			a = ft_reverse(a, b, instr);*/
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int i;

	i = 1;
	if (argc < 2)
		return (0);
	else
	{
		a = newstack(argc);
		b = newstack(argc);
		while (argv[i])
		{
			addstack(a, ft_atoi(argv[i]));
			i++;
		}
	checker(a, b);
	}
	return (0);
}

