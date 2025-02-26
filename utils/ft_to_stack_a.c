/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:14:48 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/25 11:19:14 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_to_stack_a(t_list **stack_a, t_list **stack_b, int size)
{
	int	p;

	while (size >= 0)
	{
		p = ft_get_max(*stack_b, size);
		if (p != -1)
		{
			ft_get_on_top(stack_b, size, p);
			ft_pa(stack_a, stack_b);
		}
		size--;
	}
}
