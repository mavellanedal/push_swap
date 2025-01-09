/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:34:16 by mavellan          #+#    #+#             */
/*   Updated: 2025/01/09 13:50:43 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Crea un nuevo stack
t_stack	*ft_new_stack(int number)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error_message();
	new->nbr = number;
	new->next = NULL;
	return (new);
}
