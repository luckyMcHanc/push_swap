/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:17:51 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/21 12:59:18 by lmhlanga         ###   ########.fr       */
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
	}
	if	(issorted(a))
		ft_putendl("OK");
	else
		ft_putendl("KO");
	printstack(a);
	printstack(b);
	return (0);
}

int		isdigit(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		if (!(ft_atoi(a[i])))
			return (0);
		i++;
	}
	return (1);
}

int		isdublicate(char *a)
{
	int i;
	int j;
	int tmp;
	char *hold;

	i = 0;
	j = 0;
	tmp = 0;
	hold = (char *)malloc(sizeof(char) * ft_strlen(a));
	while (a[i])
	{
		hold[i] = a[i];
		while (a[j])
		{
			if (a[j] == hold[i])
				return (0);
			j++;
		}
		i++;
	}

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
		if (isdigit(argv[1]))
		{
			if (isdublicate(argv[1]))
			{
				a = newstack(argc);
				b = newstack(argc);
				while (argv[i])
					i++;
				i--;
				while (i)
				{
					addstack(a, ft_atoi(argv[i]));
					i--;
				}
			checker(a, b);
			}
			else
				ft_putendl("Error: arguments may contain dublicate values");
		}
		else
			ft_putendl("Error: arguments may contain values which are not integers");
	}
	return (0);
}
