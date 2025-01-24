/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:21 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/16 07:13:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack_node *a)
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

void	rrb(t_stack_node *b)
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

void	rrr(t_stack_node *a, t_stack_node *b)
{
    rra(a);
    rrb(b);
}