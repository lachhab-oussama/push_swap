/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:17:34 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/18 17:29:10 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_is_sorted(t_build *data, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (data->arr[i] > data->arr[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
