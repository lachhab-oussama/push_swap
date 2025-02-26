/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:49:32 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/18 17:16:25 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	a = (*lst)->content;
	b = (*lst)->next->content;
	c = (*lst)->next->next->content;
	if (a > b && b < c && a < c)
		ft_sa(lst);
	else if (a > b && b > c)
	{
		ft_sa(lst);
		ft_rra(lst);
	}
	else if (a > b && b < c && a > c)
		ft_ra(lst);
	else if (a < b && a > c)
		ft_rra(lst);
	else if (a < b && b > c && a < c)
	{
		ft_sa(lst);
		ft_ra(lst);
	}
}
