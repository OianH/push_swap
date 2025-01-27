/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:54:18 by oiahidal          #+#    #+#             */
/*   Updated: 2025/01/22 16:56:54 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	new_argc(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				error;
	char			**new_args;

	a = NULL;
	b = NULL;
	if (argc == 1 || argc == 2 && !argv[1][0])
		return (1);
	else if (argc == 1)
		return (1);
	if (argc == 2)
		new_args = split(argv[1]);
	else
		new_args = argv;
	error = validate_args(new_args);
	if (error)
		errors_management(error, new_args);
	argc = new_argc(new_args);
	select_sort(argc, new_args);
	
	return (0);
}
