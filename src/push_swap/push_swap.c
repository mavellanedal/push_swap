/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:45:26 by mavellan          #+#    #+#             */
/*   Updated: 2025/01/09 16:11:09 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;

	a = ft_check_arg(ac, av);
	if (!a || ft_check_dup(a))
	{
		ft_free(&a);
		ft_error_message();
	}
	if (!ft_check_sorted(a))
	{
		ft_sort(&a);
	}
	ft_free(&a);
	return (0);
}
