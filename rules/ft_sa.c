/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:01:35 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 11:34:14 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(t_list **lst)
{
	t_list	*cur;
	int		tmp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	cur = *lst;
	tmp = cur->content;
	cur->content = cur->next->content;
	cur->next->content = tmp;
	write(1, "sa\n", 3);
}
