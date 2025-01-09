/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:42:12 by mavellan          #+#    #+#             */
/*   Updated: 2025/01/09 13:06:28 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Esta funcion envia del stack_a al stack_b todos los elementos
// Hasta que quedan 3.
void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_lstsize2(*stack_a) > 3 && !ft_check_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	}
}

//Esta funcion uno por uno envia todos los elementos
// del stack_a al stack_b, hasta que queden solo 3 elementos
// en el stack_a. Mientras enviamos, se asegura que el stack_b
// esta ordenado. Cuando quedan 3 elementos en el stack_a llama
// a la funcion ft_sort_three para ordenar los ultimos 3
// elementos del stack_a.
t_stack	*ft_sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_lstsize2(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize2(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize2(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	if (!ft_check_sorted(*stack_a))
		ft_sort_three_num(stack_a);
	return (stack_b);
}

// Esta funcion esta enviando de vuelta los elementos de stack_b
// Al stack_a hasta que stack_b este vacio.
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

// Esta fucnion ordena el stack_a si hay mas de
// 2 elementos en el propio stack\
// Luego ordena el stack_a despues de haber
// enviado todos los valores al stack_b, ordenado y
// enviado de vuelta al stack_a.
// Porque, incluso el stack_a es ordenado al final,
// El numero minimo debe estar en arriba del stack_a
// Entonces lo unico que hace es enviar el numero menor
// arriba del todo.
// Para enviar el numero menor lo que hago es comprobar
// Donde se encuentra, en caso de estar mitad arriba se
// aplica ra de forma normal, en caso contrario se hace de
// forma reversa.
void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize2(*stack_a) == 2)
		ft_sa(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_lstsize2(*stack_a) - i)
		{
			while ((*stack_a)->nbr != ft_min(*stack_a))
				ft_ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->nbr != ft_min(*stack_a))
				ft_rra(stack_a, 0);
		}
	}
}
