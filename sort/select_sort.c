/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:13:24 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/26 19:12:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    select_sort(int argc, char **args, t_stack_node **a, t_stack_node **b)
{
	initialize_stack(*a, args);
	initialize_stack(*b, NULL);
	if (argc == 2)
		sort_2(*a);
	else if (argc == 3)
		sort_3(*a);
	else if (argc == 4)
		sort_4(*a, *b);
	else if (argc == 5)
		sort_5(*a, *b);
	else
		big_sort(*a, *b);
}