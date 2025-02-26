/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:27:57 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 11:37:11 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	create_stack_a(int *arr, int count, t_list **stack)
{
	int	i;

	i = 0;
	while (i < count)
	{
		lst_add_back(stack, arr[i], i);
		i++;
	}
}
