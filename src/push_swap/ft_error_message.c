/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:12:05 by mavellan          #+#    #+#             */
/*   Updated: 2025/01/09 13:50:07 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Imprime el mensaje de error.
void	ft_error_message(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
