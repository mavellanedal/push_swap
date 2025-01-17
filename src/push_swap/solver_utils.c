/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:56:23 by mavellan          #+#    #+#             */
/*   Updated: 2025/01/09 13:34:01 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Esta funcion calcula cuntas veces tenemos que rotar
// los stacks juntos. Porque despues de una cierta cantidad
// es mejor solo hacer una rotacion del stack.
int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

// Esta funcion calcula cuntas veces tenemos que rotar
// los stacks juntos. Porque despues de una cierta cantidad
// es mejor solo hacer una rotacion del stack. Como hay que
// hacer rotacion inversa, en lugar de calcular el indice,
// calculamos el indice inverso que es calculado con
// list_size - num_index.
int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lstsize2(b) - ft_find_place_b(b, c);
	if ((i < (ft_lstsize2(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_lstsize2(a) - ft_find_index(a, c);
	return (i);
}

//De neuvo esta funcion hace lo similar.
// Pero con rrarb
int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_lstsize2(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

//De neuvo esta funcion hace lo similar.
// Pero con rarrb
int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lstsize2(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
