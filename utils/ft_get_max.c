/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:13:44 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 18:13:59 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_max(t_list *stack_b, int size)
{
	int		p;
	t_list	*head;

	p = 0;
	head = (stack_b);
	while (head)
	{
		if (head->index == size)
			return (p);
		head = head->next;
		p++;
	}
	return (-1);
}
