/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:21 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/26 19:07:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack_node **a)
{
    t_stack_node	*tmp;
    t_stack_node	*last;

    if (!a || !*a || !(*a)->next)
        return;
    tmp = *a;
    while (tmp->next->next)
    {
        tmp = tmp->next;
    }
    last = tmp->next;
    tmp->next = NULL;
    last->next = *a;
    (*a)->prev = last;
    *a = last;
}

void	rrb(t_stack_node **b)
{
    t_stack_node	*tmp;
    t_stack_node	*last;

    if (!b || !*b || !(*b)->next)
        return;
    tmp = *b;
    while (tmp->next->next)
    {
        tmp = tmp->next;
    }
    last = tmp->next;
    tmp->next = NULL;
    last->next = *b;
    (*b)->prev = last;
    *b = last;
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
    rra(a);
    rrb(b);
}