/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:37:13 by oiahidal          #+#    #+#             */
/*   Updated: 2024/12/07 12:54:58 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_management(int error, char **args)
{
	if (error == -1)
		exit (1);
	else if (error == 1)
	{
		write(2, "Error\n", 7);
		free_args(args);
	}
	exit (1);
}