/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:59:24 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:33:50 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;

	if (!stack_a || !stack_b)
		return ;
	new = *stack_a;
	*stack_a = (*stack_a)->next;
	new->next = NULL;
	ft_lstadd_front(stack_b, new);
	write(1, "pb\n", 3);
}
