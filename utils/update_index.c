/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:32:32 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/18 16:32:49 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	update_index(t_list *stack)
{
	t_list	*current;
	int		i;

	i = 0;
	current = stack;
	while (current)
	{
		current->index = i;
		current = current->next;
		i++;
	}
}
