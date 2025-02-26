/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:27:54 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/24 18:06:19 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_build
{
	int				*arr;
	char			**ptr;
	int				count;
}					t_build;

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;

/*-------------------Parsing------------------*/

int					check_args(char **str);
void				prepar_all_args(char *str, t_build *data);
int					count_elements(char **array);
int					check_is_duplicates(int *ptr, t_build *data);
int					is_char(char *str);
int					check_is_non_digit(char **str);
char				**ft_split(char const *s, char c);
long				ft_atoi(const char *nptr);
int					is_valid_number(const char *str);
int					ft_isdigit(int c);
char				*join_arguments(int ac, char **av);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);

/*--------------------Utils--------------------*/

void				*ft_memcpy(void *dest, const void *src, size_t n);
int					argumet_num(int ac);
void				lst_add_back(t_list **Root, int content, int index);
t_list				*ft_lstnew(int content);
int					ft_lstsize(t_list *lst);
int					check_is_sorted(t_build *data, int size);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				update_index(t_list *stack);
int					smallest_finder(t_list *lst);
int					get_range(int size);
int					ft_get_max(t_list *stack_b, int size);
void				ft_get_on_top(t_list **stack_b, int size, int r);

/*-------------Stack Operations----------------*/

void				create_stack_a(int *arr, int count, t_list **stack);
void				ft_to_stack_b(t_list **stack_a, t_list **stack_b,
						int range);
void				ft_to_stack_a(t_list **stack_a, t_list **stack_b, int size);
void				ft_sort_arr(t_build *data);
void				ft_put_index_to_list(t_build *data, t_list **stack_a);
void				ft_put_index(int num, int index, t_list **stack_a);

/*--------------------Rules--------------------*/

void				ft_pa(t_list **stack_a, t_list **stack_b);
void				ft_pb(t_list **stack_a, t_list **stack_b);
void				ft_sa(t_list **lst);
void				ft_sb(t_list **lst);
void				ft_ss(t_list **stack_a, t_list **stack_b);
void				ft_ra(t_list **stack_a);
void				ft_rb(t_list **stack_b);
void				ft_rra(t_list **stack_a);
void				ft_rrb(t_list **stack_b);
void				ft_rrr(t_list **stack_a, t_list **stack_b);

/*--------------------ft_sort------------------*/

void				ft_sort_two(t_list **lst);
void				ft_sort_three(t_list **lst);
void				ft_sort_small(t_list **stack_a, t_list **stack_b);
void				ft_sort(t_build *data, t_list **stack_a, t_list **stack_b);

/*--------------------Cleanup------------------*/

// void				free_ptr(char **ptr);
void				free_stack(t_list **stack);
void				free_data(t_build *data);

#endif
