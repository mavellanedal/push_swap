/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:25:47 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/12 18:03:21 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_atoi2(const char *str)
{
	int				sign;
	long long int	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
	}
	str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error_message();
		res *= 10;
		res += *str - '0';
		str++;
	}
	if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
		ft_error_message();
	return (res * sign);
}
