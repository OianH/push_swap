/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:18 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/16 07:14:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_node *a)
{
    t_stack_node	*tmp;

    tmp = a;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = a;
    a->prev = tmp;
    a->next->prev = NULL;
    a->next = NULL;
}

void	rb(t_stack_node *b)
{
    t_stack_node	*tmp;

    tmp = b;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = b;
    b->prev = tmp;
    b->next->prev = NULL;
    b->next = NULL;
}

void	rr(t_stack_node *a, t_stack_node *b)
{
    ra(a);
    rb(b);
}