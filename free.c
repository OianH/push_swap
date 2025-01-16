/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:31:07 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/16 07:17:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_args(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			free(args[i][j]);
			j++;
		}
		i++;
	}
	free(args);
}

void	free_stack(t_stack_node *stack)
{
	t_stack_node	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

void	free_all(t_stack_node *a, t_stack_node *b, char **args)
{
	free_stack(a);
	free_stack(b);
	free_args(args);
}
