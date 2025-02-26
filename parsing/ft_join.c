/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 09:03:50 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/19 17:04:41 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*join_arguments(int ac, char **av)
{
	char	*result;
	int		allocated_size;
	size_t	total_length;
	int		i;

	total_length = 0;
	i = 1;
	while (i < ac)
	{
		total_length += ft_strlen(av[i]);
		i++;
	}
	allocated_size = total_length + (ac - 1) + 1;
	result = malloc(allocated_size);
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 1;
	while (i < ac)
	{
		ft_strlcat(result, av[i], allocated_size);
		if (i != ac - 1)
			ft_strlcat(result, " ", allocated_size);
		i++;
	}
	return (result);
}
