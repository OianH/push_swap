/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:51:16 by oiahidal          #+#    #+#             */
/*   Updated: 2024/12/07 12:48:55 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	error = validate_args(argv);
	if (error)
		errors_management(error, new_args);
	initialize_stack(a, new_args);
	
    return (0);
}