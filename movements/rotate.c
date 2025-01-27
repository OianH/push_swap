/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:18 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/26 19:09:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_node **a)
{
    t_stack_node	*tmp;
    t_stack_node	*head;

    if (!a || !*a || !(*a)->next)
        return;
    head = *a;
    tmp = *a;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    *a = head->next;
    (*a)->prev = NULL;
    head->next = NULL;
    head->prev = tmp;
    tmp->next = head;
}

void	rb(t_stack_node **b)
{
    t_stack_node	*tmp;
    t_stack_node	*head;

    if (!b || !*b || !(*b)->next)
        return;
    head = *b;
    tmp = *b;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    *b = head->next;
    (*b)->prev = NULL;
    head->next = NULL;
    head->prev = tmp;
    tmp->next = head;
}

void	rr(t_stack_node **a, t_stack_node **b)
{
    ra(a);
    rb(b);
}