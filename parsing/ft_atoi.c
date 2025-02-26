/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:27:13 by olachhab          #+#    #+#             */
/*   Updated: 2025/02/25 11:43:16 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	is_valid_number(const char *str)
// {
// 	if (!str || !*str)
// 		return (0);
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str)
// 	{
// 		if (!ft_isdigit(*str))
// 			return (0);
// 		str++;
// 	}
// 	return (1);
// }

long	ft_atoi(const char *nptr)
{
	const char	*ptr = nptr;
	int			sign;
	long		res;

	sign = 1;
	res = 0;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		res = res * 10 + (*ptr - '0');
		if ((sign == 1 && res > INT_MAX) || (sign == -1 && res > (long)INT_MAX
				+ 1))
		{
			return (res);
		}
		ptr++;
	}
	return (res * sign);
}
