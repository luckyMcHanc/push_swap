/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adder.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:09:24 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/09/02 12:20:35 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**removearg(char **s, int x)
{
	int i;
	char **str;

	str = (char **)malloc(sizeof(char) * x);
	while(s[i])
	{
		str[i] = (char *)malloc(sizeof(char) * x);
		str[i] = s[i + 1];
		i++;
	}
	return (str);
}
int		error_check(t_stack *a, char **s)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(!ft_strcmp(s[i], "-2147483648")
				||!ft_strcmp(s[i], "2147483647"))
		{
			ft_putendl("Error");
			free(a);
			return (0);
		}
		i++;
	}
	return (1);
}

int		adderf(t_stack *a, char **s, int i)
{
	int hold;

	hold = 0;
	if (error_check(a, s))
	{
		while (i != -1)
		{
			if ((hold = ft_atoi(s[i])) || ft_atoi(s[i]) == 0)
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
	return (0);
}

int		adder(t_stack *a, char **s, int i)
{
	if (adderf(a, s, i))
		return (1);
	return (0);
}
