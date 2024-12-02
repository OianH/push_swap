/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:18 by oiahidal          #+#    #+#             */
/*   Updated: 2024/12/02 01:50:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_node *a)
{
    t_stack_node	*temp;
    t_stack_node	*last;

    if (!a || !a->next)
        return ;
    temp = a;
    while (temp->next)
    {
        last = temp;
        temp = temp->next;
    }
    last->next = NULL;
    temp->next = a;
    temp->prev = NULL;
    a->prev = temp;
    a = temp;
}

void	rb(t_stack_node *b)
{
	t_stack_node    *temp;
    t_stack_node    *last;

    if (!b || !b->next)
        return ;
    temp = b;
    while (temp->next)
    {
        last = temp;
        temp = temp->next;
    }
    last->next = NULL;
    temp->next = b;
    temp->prev = NULL;
    b->prev = temp;
    b = temp;
}

void	rr(t_stack_node *a, t_stack_node *b)
{
    ra(a);
    rb(b);
}