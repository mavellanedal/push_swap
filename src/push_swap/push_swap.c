/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:45:26 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/12 18:01:00 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;

	a = ft_check_arg(ac, av);
	return (0);
	if (!a || ft_check_dup(a))
	{
		free(a);
		ft_error_message();
	}
	return (0);
}
