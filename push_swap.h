/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:27:08 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/12 14:01:23 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"

typedef struct	s_stack
{
	int			top;
	int			*data;
	int			max;
}				t_stack;

int				checker(t_stack *a, t_stack *b);
t_stack			*newstack(int cap);
void			*addstack(t_stack *a, int x);
void			*ft_swab(t_stack *a, t_stack  *b, char *instr);
int				isEmpty(t_stack *a);
void			ft_push(t_stack *a, t_stack *b, char *instr);
void			ft_rotate(t_stack *a, t_stack *b, char *instr);

#endif
