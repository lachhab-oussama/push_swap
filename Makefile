NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

MAIN_SORT = ./main_sort
PARSING = ./parsing
UTILS = ./utils
RULES = ./rules
FT_SORT = ./ft_sort

MAIN_SORT_SRCS = $(MAIN_SORT)/push_swap.c

PARSING_SRCS = 	$(PARSING)/ft_atoi.c \
				$(PARSING)/check_args.c \
				$(PARSING)/check_is_duplicates.c \
				$(PARSING)/check_is_non_digit.c \
				$(PARSING)/ft_isdigit.c \
				$(PARSING)/is_char.c \
				$(PARSING)/ft_join.c \
				$(PARSING)/ft_split.c \
				$(PARSING)/ft_strlcat.c \
				$(PARSING)/ft_strlen.c \
				$(PARSING)/prepar_all_args.c \
				$(PARSING)/create_stack_a.c

UTILS_SRCS = 	$(UTILS)/argumet_num.c \
				$(UTILS)/smallest_finder.c \
				$(UTILS)/ft_lstadd_back.c \
				$(UTILS)/ft_lstnew.c \
				$(UTILS)/ft_lstsize.c \
				$(UTILS)/ft_memcpy.c \
				$(UTILS)/check_is_sorted.c \
				$(UTILS)/ft_lstadd_front.c \
				$(UTILS)/update_index.c \
				$(UTILS)/ft_sort_arr.c \
				$(UTILS)/ft_put_index_to_list.c \
				$(UTILS)/get_range.c \
				$(UTILS)/ft_to_stack_b.c \
				$(UTILS)/ft_get_max.c \
				$(UTILS)/ft_to_stack_a.c \
				$(UTILS)/ft_get_on_top.c \
				$(UTILS)/cleanup.c

RULES_SRCS = 	$(RULES)/ft_sa.c \
				$(RULES)/ft_sb.c \
				$(RULES)/ft_ss.c \
				$(RULES)/ft_pa.c \
				$(RULES)/ft_pb.c \
				$(RULES)/ft_ra.c \
				$(RULES)/ft_rb.c \
				$(RULES)/ft_rr.c \
				$(RULES)/ft_rra.c \
				$(RULES)/ft_rrb.c \
				$(RULES)/ft_rrr.c

FT_SORT_SRCS =	$(FT_SORT)/ft_sort_two.c \
				$(FT_SORT)/ft_sort_three.c \
				$(FT_SORT)/ft_sort_small.c \
				$(FT_SORT)/ft_sort.c



SRCS = $(MAIN_SORT_SRCS) $(PARSING_SRCS) $(UTILS_SRCS) $(RULES_SRCS) $(FT_SORT_SRCS)

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	@ $(CC) $(OBJS) $(LDFLAGS) $(MLX_FLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.SECONDARY : $(OBJS)

clean:
	@ rm -f $(OBJS)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re