/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_non_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:21:04 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/20 10:08:45 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_is_non_digit(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i][0] == '-' && str[i][1] == '-' && str[i][2] == '\0')
		{
			return (0);
		}
		else if (is_char(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
