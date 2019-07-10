/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:13:43 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/10 16:57:45 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strcmp(instr, "pa") == 0)
		if (isEmpty(b) == 0)
			addstack(a, b->data[a->top]);
	if (ft_strcmp(instr, "pb") == 0)
		if (isEmpty(a) == 0)
			addstack(b, a->data[b->top]);
}
