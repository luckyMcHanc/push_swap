/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:27:08 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/03 15:28:13 by lmhlanga         ###   ########.fr       */
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
void			*ft_swab(t_stack *a, t_stack *b, char *instr);
int				isempty(t_stack *a);
void			ft_push(t_stack *a, t_stack *b, char *instr);
void			ft_rotate(t_stack *a, t_stack *b, char *instr);
void			ft_reverse(t_stack *a, t_stack *b, char *instr);
void			printstack(t_stack *a);
int				adder(t_stack *a, char **s, int i);
void			sort_3(t_stack *a);
void			sort_5(t_stack *a);
void			sort_100(t_stack *a, t_stack *b);
void			removestack(t_stack *a, int i);
void			ft_move(t_stack *a, t_stack *b, int v, char *in);
int				find_top(t_stack *a, int s, int e);
int				find_bottom(t_stack *a, int s, int e);
void			ft_move_back(t_stack *a, t_stack *b);
char			**removearg(char **s);
char			**fix_strl(char *s);
int				newlen(char **str);
#endif
