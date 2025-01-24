/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:56:54 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/22 15:52:31 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_2(t_stack_node **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void sort_3(t_stack_node **a)
{
	if ((*a)->nbr > (*a)->next->nbr && (*a)->next->nbr < (*a)->next->next->nbr)
		sa(a);
	else if ((*a)->nbr > (*a)->next->next->nbr)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else if ((*a)->nbr > (*a)->next->nbr)
		ra(a);
	else if ((*a)->next->nbr > (*a)->next->next->nbr)
	{
		sa(a);
		ra(a);
		sa(a);
		rra(a);
	}
}

void sort_4(t_stack_node **a, t_stack_node **b)
{
	int i;
	int min;
	int max;

	i = 0;
	while (i < 4)
	{
		min = get_min(*a);
		max = get_max(*a);
		if ((*a)->nbr == min || (*a)->nbr == max)
			pb(a, b);
		else
			ra(a);
		i++;
	}
	sort_3(a);
	pa(a, b);
}

void sort_5(t_stack_node **a, t_stack_node **b)
{
	int i;
	int min;
	int max;

	i = 0;
	while (i < 5)
	{
		min = get_min(*a);
		max = get_max(*a);
		if ((*a)->nbr == min || (*a)->nbr == max)
			pb(a, b);
		else
			ra(a);
		i++;
	}
	sort_3(a);
	pa(a, b);
	pa(a, b);
}