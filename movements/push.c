/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 03:28:57 by oiahidal          #+#    #+#             */
/*   Updated: 2024/11/15 03:30:09 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*temp;

	if (!b)
		return ;
	temp = b;
	b = b->next;
	if (b)
		b->prev = NULL;
	temp->next = a;
	temp->prev = NULL;
	if (a)
		a->prev = temp;
	a = temp;
}

void	pb(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*temp;

	if (!a)
		return ;
	temp = a;
	a = a->next;
	if (a)
		a->prev = NULL;
	temp->next = b;
	temp->prev = NULL;
	if (b)
		b->prev = temp;
	b = temp;
}
