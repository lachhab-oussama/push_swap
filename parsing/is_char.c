/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:21:36 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 16:45:02 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_char(char *str)
{
	int	i;
	int	has_digit;

	i = 0;
	has_digit = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '+' || str[i] == '-')
			i++;
		if (!ft_isdigit(str[i]))
			return (0);
		while (ft_isdigit(str[i]))
		{
			i++;
			has_digit = 1;
		}
		while (str[i] == ' ' || str[i] == '\t')
			i++;
	}
	return (has_digit);
}
