/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:50:23 by oiahidal          #+#    #+#             */
/*   Updated: 2024/12/05 19:15:30 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_str(char *str)
{
	int	i;
	int	symbol;
	int	sign;

	i = 0;
	symbol = 0;
	sign = 0;
	while (str[i])
	{
		if ((str[i] >= 33 && str[i] <= 47 && str[i] != '-' && str[i] != '+')
			|| (str[i] >= 58 && str[i] <= 127
				&& str[i] != '-' && str[i] != '+'))
			return (1);
		i++;
	}
	return (0);
}

int	validate_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			if (!(ft_isdigit(str[i])))
				return (1);
		}
		i++;
	}
	return (0);
}

int	validate_numbers(char **nbrs)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (nbrs[i])
	{
		while (nbrs[j])
		{
			if (!ft_strcmp(nbrs[i], nbrs[j]))
				j++;
			else
				return (1);
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	validate_new_args(int argc, char **args)
{
	int	i;
	char	**new_args;

	i = 0;
	if (argc == 2)
		new_args = ft_split(args[1])
	else
		new_args = args[1];
	while (new_args[i])
		i++;
	if (i == 1)
		return (1);
	else
		return (0);
	
}

int	validate_args(int argc, char **argv)
{
	int		i;
	int		j;
	int		errors;
	char	**new_args;

	i = 0;
	errors = 0;
	if (argc == 2)
		new_args = ft_split(argv[1]);
	else if (argc < 2)
		// error args insuficientes
	else
		new_args = argv;
	if (validate_new_args(new_args))
		// error args insuficientes
	while (new_args[i])
	{
		while (new_args[j])
		{
			if (validate_str(new_args[j]))
				errors = 1;
			i++;
		}
		while (new_args[j])
		{
			if (validate_sign(new_args[j]))
				errors = 2;
			i++;
		}
		while (new_args[j])
		{
			if (validate_numbers(new_args[j]))
				errors = 3;
			i++;
		}
		j = 0;
		i++;
	}
}
