/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:17:51 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/09 17:00:31 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"

int		checker(stack *a)
{
	char *instr;
	while (get_next_line(0, &instr) == 1)
	{
		if (instr ==  "sa" || instr == "sb" || instr == "ss")
			ft_swab(a, b, instr);
		else if (instr == "pa" || instr == "pb")
			ft_push(a, b, instr);
		else if (instr == "ra" || instr == "rb" || instr == "rr")
			ft_rotate(a, b, instr);
		else if (instr == "rra" || instr == "rrb" || instr == "rrr")
			ft_reverse(a, b, instr);
	}
}

int main(int argc, char **argv)
{
	stack *a;
	int i;

	i = 1;
	if (argc < 2)
		return (0);
	else
	{
		a = newstack(a);
		while (argv[i])
		{
			addstack(argv[i], &a);
			i++;
		}
	checker(a);
	}
	return (0);
}

