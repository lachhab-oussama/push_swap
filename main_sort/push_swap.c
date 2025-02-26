/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:40:34 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/26 19:09:22 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char *av[])
{
	char	*joined_args;
	t_build	*data;
	t_list	*stack_a;
	t_list	*stack_b;

	data = (t_build *)malloc(sizeof(t_build));
	stack_a = NULL;
	stack_b = NULL;
	data->arr = 0;
	data->ptr = NULL;
	if (ac > 1)
	{
		if (!check_args(av))
			return (free(data), 0);
		joined_args = join_arguments(ac, av);
		if (!joined_args)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		prepar_all_args(joined_args, data);
		free(joined_args);
		create_stack_a(data->arr, data->count, &stack_a);
		if (!check_is_sorted(data, data->count)
			&& !check_is_duplicates(data->arr, data))
		{
			ft_sort_arr(data);
			ft_sort(data, &stack_a, &stack_b);
		}

		t_list *cur;
		cur = stack_a;
		while (cur)
		{
			printf("%d ->", cur->content);
			cur = cur->next;
		}
		
		
		free_stack(&stack_a);
		free_data(data);
	}
	return (0);
}
