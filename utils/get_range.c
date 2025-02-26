/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:11:54 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/25 09:55:26 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_range(int size)
{
	int	range;

	range = 0;
	if (size > 20 && size <= 100)
	{
		range = 10;
	}
	else
	{
		range = 40;
	}
	return (range);
}
