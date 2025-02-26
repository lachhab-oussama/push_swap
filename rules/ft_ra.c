/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:59:36 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:33:55 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*cur;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	cur = *stack_a;
	*stack_a = tmp->next;
	while (cur->next)
		cur = cur->next;
	cur->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}
