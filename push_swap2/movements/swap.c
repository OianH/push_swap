/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:04 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/16 07:14:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack_node *a)
{
	t_stack_node	*temp;

	if (!a || !a->next)
		return ;
	temp = a->next;
	a->next = temp->next;
	if (temp->next)
		temp->next->prev = a;
	temp->next = a;
	temp->prev = a->prev;
	if (a->prev)
		a->prev->next = temp;
	a->prev = temp;
	a = temp;
}

void	sb(t_stack_node *b)
{
	t_stack_node	*temp;

	if (!b || !b->next)
		return ;
	temp = b->next;
	b->next = temp->next;
	if (temp->next)
		temp->next->prev = b;
	temp->next = b;
	temp->prev = b->prev;
	if (b->prev)
		b->prev->next = temp;
	b->prev = temp;
	b = temp;
}

void	ss(t_stack_node *a, t_stack_node *b)
{
	sa(a);
	sb(b);
}