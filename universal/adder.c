/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adder.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:09:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/13 13:17:41 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		adder(t_stack *a, char **s, int i)
{
	int hold;

	hold = 0;
	while (i)
	{
		if (ft_atoi(s[i]) == 0)
			addstack(a, ft_atoi(s[i]));
		else if ((hold = ft_atoi(s[i])))
			addstack(a, hold);
		else
		{
			ft_putendl("Error: May Contain values which are not intergers!");
			free(a);
			return (0);
		}
		i--;
	}
	return (1);
}
