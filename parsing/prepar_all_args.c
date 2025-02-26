/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepar_all_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:01:59 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 18:07:48 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	count_elements(char **array)
{
	int	count;

	count = 0;
	while (array[count])
		count++;
	return (count);
}

void	prepar_all_args(char *str, t_build *data)
{
	int		i;
	long	value;

	if (!str)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (!data)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	data->ptr = ft_split(str, ' ');
	if (!check_is_non_digit((data)->ptr))
	{
		free_data(data);
		free(str);
		write(2, "Error\n", 6);
		exit(1);
	}
	data->count = 0;
	while (data->ptr[data->count] != NULL)
	{
		data->count++;
	}
	if (data->count == 0)
	{
		free_data(data);
		free(str);
		write(2, "Error\n", 6);
		exit(1);
	}
	data->arr = (int *)malloc(data->count * sizeof(int));
	if (!data->arr)
	{
		free_data(data);
		free(str);
		write(2, "Error\n", 6);
		exit(1);
	}
	i = 0;
	while (data->ptr[i] != NULL && data->ptr[i][0] != '\0')
	{
		value = ft_atoi(data->ptr[i]);
		if (value > INT_MAX || value < INT_MIN)
		{
			free_data(data);
			free(str);
			write(2, "Error\n", 6);
			exit(1);
		}
		data->arr[i] = (int)value;
		i++;
	}
}
