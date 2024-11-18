/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:50:23 by oiahidal          #+#    #+#             */
/*   Updated: 2024/11/18 18:54:49 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int validate_str(char *str)
{
	int	i;
	int	symbol;
	int sign;

	i = 0;
	symbol = 0;
	sign = 0;

	while (str[i])
	{
		if ((str[i] >= 33 && str[i] <= 47 && str[i] != '-' && str[i] != '+')
		|| (str[i] >= 58 && str[i] <= 127 && str[i] != '-' && str[i] != '+'))
			return (0);
		i++;
	}
	return (1);
}

int validate_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 0;
	while(str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			if (!(ft_isdigit(str[i])))
				return (0);
		}
		i++;
	}
	return (1);
}

int validate_numbers(int **nbrs)
{
	
}