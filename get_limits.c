/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_limits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:55:38 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/26 18:51:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack_node **a)
{
    t_stack_node	*tmp;
    int				min;

    tmp = *a;
    min = INT_MAX;
    while (tmp)
    {
        if (tmp->nbr < min)
            min = tmp->nbr;
        tmp = tmp->next;
    }
    return (min);
}

int	get_max(t_stack_node **a)
{
    t_stack_node	*tmp;
    int				max;

    tmp = *a;
    max = INT_MIN;
    while (tmp)
    {
        if (tmp->nbr > max)
            max = tmp->nbr;
        tmp = tmp->next;
    }
    return (max);
}