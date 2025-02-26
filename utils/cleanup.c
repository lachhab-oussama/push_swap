/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:44:29 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/25 11:43:50 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_data(t_build *data)
{
	int	i;

	if (!data)
		return ;
	if (data->ptr)
	{
		i = 0;
		while (data->ptr[i])
		{
			free(data->ptr[i]);
			i++;
		}
		free(data->ptr);
	}
	if (data->arr)
		free(data->arr);
	free(data);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	while ((*stack))
	{
		tmp = (*stack);
		(*stack) = (*stack)->next;
		free(tmp);
	}
}
