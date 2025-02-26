/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 12:10:57 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:34:18 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sb(t_list **lst)
{
	t_list	*cur;
	int		tmp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	cur = *lst;
	tmp = cur->content;
	cur->content = cur->next->content;
	cur->next->content = tmp;
	write(1, "sb\n", 3);
}
