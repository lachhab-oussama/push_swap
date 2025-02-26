/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:19:02 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 16:34:36 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	lst_add_back(t_list **Root, int content, int index)
{
	t_list	*new_node;
	t_list	*curr;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		exit (0);
	new_node->content = content;
	new_node->index = index;
	new_node->next = NULL;
	if (!*Root)
	{
		*Root = new_node;
		return ;
	}
	curr = *Root;
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}
