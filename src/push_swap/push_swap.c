/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:45:26 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/20 16:08:39 by mavellan         ###   ########.fr       */
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
	return (0);
}
