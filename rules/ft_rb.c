/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:00:12 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:33:58 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*cur;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	cur = *stack_b;
	*stack_b = tmp->next;
	while (cur->next)
		cur = cur->next;
	cur->next = tmp;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}
