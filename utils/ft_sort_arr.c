/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:36:38 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 10:01:13 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_arr(t_build *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < data->count - 1)
	{
		j = 0;
		while (j < data->count - 1 - i)
		{
			if (data->arr[j] > data->arr[j + 1])
			{
				tmp = data->arr[j];
				data->arr[j] = data->arr[j + 1];
				data->arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
