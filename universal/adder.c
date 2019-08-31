/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adder.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:09:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/31 16:29:57 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		adder(t_stack *a, char **s, int i)
{
	int hold;

	hold = 0;
	while (i)
	{
		if (!ft_strcmp(s[i], "-2147483648") ||
				!ft_strcmp(s[i], "2147483647"))
		{
			ft_putendl("Error");
			free(a);
			return (0);
		}
		else if ((hold = ft_atoi(s[i])) || ft_atoi(s[i]) == 0)
			addstack(a, hold);
		else
		{
			ft_putendl("Error");
			free(a);
			return (0);
		}
		i--;
	}
	return (1);
}
