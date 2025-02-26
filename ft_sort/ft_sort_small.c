/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:24:03 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:35:31 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_small(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	div;
	int	small;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		small = smallest_finder(*stack_a);
		div = size / 2;
		if ((*stack_a)->index != small)
		{
			if (small <= div)
			{
				ft_ra(stack_a);
				update_index(*stack_a);
			}
			else
			{
				ft_rra(stack_a);
				update_index(*stack_a);
			}
		}
		else
		{
			ft_pb(stack_a, stack_b);
			update_index(*stack_b);
			size--;
		}
	}
	ft_sort_three(stack_a);
	while (*stack_b)
		ft_pa(stack_a, stack_b);
}
