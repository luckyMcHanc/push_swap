/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adder.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:09:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/04 15:27:57 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**removearg(char **s)
{
	int		i;
	char	**str;

	i = 0;
	str = s;
	while (s[i])
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = 0;
	return (str);
}

int		adderf(t_stack *a, char **s, int i)
{
	int hold;

	hold = 0;
	while (i != -1)
	{
		if (ft_isint(s[i]))
		{
			hold = ft_atoi(s[i]);
			addstack(a, hold);
		}
		else
		{
			ft_putendl_fd("Error", 2);
			free(a);
			return (0);
		}
		i--;
	}
	return (1);
}

int		adder(t_stack *a, char **s, int i)
{
	if (adderf(a, s, i))
		return (1);
	return (0);
}

char	**fix_strl(char *str)
{
	char **s;

	s = ft_strsplit(str, ' ');
	return (s);
}

int		newlen(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	return (i);
}
