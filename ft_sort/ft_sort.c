/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:30:12 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/26 20:19:10 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort(t_build *data, t_list **stack_a, t_list **stack_b)
{
	int	size_stack_a;

	size_stack_a = ft_lstsize(*stack_a);
	if (size_stack_a == 2)
	{
		ft_sort_two(stack_a);
	}
	else if (size_stack_a == 3)
	{
		ft_sort_three(stack_a);
	}
	else if (size_stack_a > 3 && size_stack_a <= 20)
	{
		ft_sort_small(stack_a, stack_b);
	}
	else if (size_stack_a > 20)
	{
		ft_put_index_to_list(data, stack_a);
		ft_to_stack_b(stack_a, stack_b, get_range(size_stack_a));
		ft_to_stack_a(stack_a, stack_b, data->count);
	}
}
