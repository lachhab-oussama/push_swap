/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:24:43 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:25:11 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	smallest_finder(t_list *lst)
{
	t_list	*cur;
	int		tmp;
	int		index_to;

	if (!lst)
	{
		return (1);
	}
	cur = lst;
	tmp = INT_MAX;
	index_to = 0;
	while (cur)
	{
		if (cur->content < tmp)
		{
			tmp = cur->content;
			index_to = cur->index;
		}
		cur = cur->next;
	}
	return (index_to);
}
