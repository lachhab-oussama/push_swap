/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:59:13 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:33:45 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;

	if (!stack_b || !*stack_b)
		return ;
	new = *stack_b;
	*stack_b = (*stack_b)->next;
	new->next = NULL;
	ft_lstadd_front(stack_a, new);
	write(1, "pa\n", 3);
}
