/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:50:23 by oiahidal          #+#    #+#             */
/*   Updated: 2024/12/06 16:48:17 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_str(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if ((args[i][j] >= 33 && ((args[i][j] <= 47
					&& (args[i][j] != '-' && args[i][j] != '+')
				|| (args[i][j] >= 58 && args[i][j] <= 127
				&& args[i][j] != '-' && args[i][j] != '+')))))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	validate_sign(char **args)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (args[i][j] == '-' || (args[i][j] == '+'))
			{
				j++;
				if (!ft_isdigit(args[i][j]))
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	validate_numbers(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (!ft_strcmp(args[i], args[j]))
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	validate_args_count(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	if (i <= 1)
		return (1);
	else
		return (0);
}

int	validate_args(char **args)
{
	if (validate_new_args(args))
		return (-1);
	if (validate_str(args))
		return (1);
	else if (validate_sign(args))
		return (1);
	else if (validate_numbers(args))
		return (1);
	else
		return (0);
}
