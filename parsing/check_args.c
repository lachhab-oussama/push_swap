/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:25:26 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 17:33:39 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_args(char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i][0] == '\0')
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	i = 1;
	while (str[i])
	{
		if (!is_char(str[i]))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
