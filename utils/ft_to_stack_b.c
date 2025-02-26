/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:12:50 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/25 11:39:07 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_to_stack_b(t_list **stack_a, t_list **stack_b, int range)
{
	int	i;

	i = 0;
	while ((*stack_a))
	{
		if ((*stack_a)->index < i)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
			range++;
		}
		else if ((*stack_a)->index >= i && (*stack_a)->index <= range)
		{
			ft_pb(stack_a, stack_b);
			i++;
			range++;
		}
		else
			ft_ra(stack_a);
	}
	return ;
}
