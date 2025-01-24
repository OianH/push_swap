/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:25:30 by oiahidal          #+#    #+#             */
/*   Updated: 2024/11/21 16:31:09 by oiahidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;
	size_t			n;

	i = 0;
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	if (a > b)
		n = a;
	else
		n = b;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
