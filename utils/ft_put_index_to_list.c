/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_index_to_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:55:00 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 10:35:46 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_put_index_to_list(t_build *data, t_list **stack_a)
{
	int	i;

	i = 0;
	while (i < data->count)
	{
		ft_put_index(data->arr[i], i, stack_a);
		i++;
	}
}

void	ft_put_index(int num, int index, t_list **stack_a)
{
	t_list	*cur;
	int		i;

	i = 0;
	cur = *stack_a;
	while (cur)
	{
		if (cur->content == num)
		{
			cur->index = index;
			break ;
		}
		cur = cur->next;
	}
	return ;
}
