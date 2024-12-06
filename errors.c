/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:37:13 by oiahidal          #+#    #+#             */
/*   Updated: 2024/12/06 16:30:49 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <unistd.h>

void error_management(int error)
{
	if (error == -1)
		return (0);
	else if (error == 1)
		write(2, "Error\n", 7);
	// funcion de free
	exit (1);
}