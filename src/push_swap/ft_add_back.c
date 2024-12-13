/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:23:40 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/13 16:40:51 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_add_back(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		ft_error_message();
	if (!*stack)
		*stack = new_stack;
	else
		(ft_lstlast2(*stack))->next = new_stack;
}
