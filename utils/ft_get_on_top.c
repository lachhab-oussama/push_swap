/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_on_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:15:44 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/26 20:09:21 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_on_top(t_list **stack_b, int size, int r)
{
	if (r <= size / 2)
	{
		while (r > 0)
		{
			ft_rb(stack_b);
			r--;
		}
	}
	else if (r > size / 2)
	{
		r = size - r;
		while (r >= 0)
		{
			ft_rrb(stack_b);
			r--;
		}
	}
	return ;
}

