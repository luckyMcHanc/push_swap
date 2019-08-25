/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:01:28 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/08/20 12:04:36 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack *a)
{
	if (a->data[2] > a->data[1] && a->data[1] < a->data[0]
			&& a->data[2] < a->data[0])
		ft_putendl("sa");
	else if (a->data[2] > a->data[1] && a->data[1] > a->data[0])
		ft_putendl("sa\nrra");
	else if (a->data[2] > a->data[1] && a->data[1] < a->data[0]
			&& a->data[2] > a->data[0])
		ft_putendl("ra");
	else if (a->data[2] < a->data[1] && a->data[1] > a->data[0]
			&& a->data[2] < a->data[0])
		ft_putendl("sa\nra");
	else if (a->data[2] < a->data[1] && a->data[1] > a->data[0]
			&& a->data[2] > a->data[0])
		ft_putendl("rra");
}

void	sort_5(t_stack *a)
{
	ft_putendl("pb\npb");
	sort_3(a);
	ft_putendl("pa");
	if (a->data[3] > a->data[2] && a->data[3] < a->data[1])
		ft_putendl("sa");
	else if (a->data[3] > a->data[1] && a->data[3] < a->data[0])
		ft_putstr("sa\npb\nsa\npa\n");
	else if (a->data[3] > a->data[0])
		ft_putendl("ra");
	ft_putendl("pa");
	if (a->data[4] > a->data[3] && a->data[4] < a->data[2])
		ft_putendl("sa");
	else if (a->data[4] > a->data[2] && a->data[4] < a->data[1])
		ft_putstr("sa\npb\nsa\npa\n");
	else if (a->data[4] > a->data[1] && a->data[4] < a->data[0])
		ft_putstr("rra\npb\nra\npa\nra\n");
	else if (a->data[4] > a->data[0])
		ft_putendl("ra");
}
