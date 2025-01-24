/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:56:16 by oiahidal          #+#    #+#             */
/*   Updated: 2024/11/18 19:04:44 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int **convert(char **array)
{
	int		i;
	int		j;
	char	**numbers;

	i = 0;
	j = 0;
	while (array[i])
		i++;
	numbers = malloc(sizeof(int) * (i + 1));
	i = 0;
	while (array[i])
	{
		numbers[i][j] = malloc(sizeof(int) * )
	}
}