/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_duplicates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:22:12 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 17:17:15 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_is_duplicates(int *ptr, t_build *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->count)
	{
		j = i + 1;
		while (j < data->count)
		{
			if (ptr[i] == ptr[j])
			{
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
