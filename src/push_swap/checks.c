/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:39:37 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/12 18:11:20 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_check_dup(t_stack *a)
{
	t_stack	*temp;

	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (a->nbr == temp->nbr)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

t_stack	*ft_add_back(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		ft_error_message();
	if (!*stack)
		*stack = new_stack;
	else
		(ft_lstlast(*stack))->next = new_stack;
}

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

t_stack	*ft_check_arg(int ac, char **av)
{
	int		i;
	int		j;
	t_stack	*a;

	a = NULL;
	i = 0;
	if (ac < 2)
		ft_error_message();
	/*else if (ac == 2)
	{
		a = ft_subprocess(av);
	}*/
	else
	{
		while (ac > 2)
		{
			j = ft_atoi2(ac);
			a = ft_add_back(&a, ft_new_stack(j));
			i++;
		}
	}
}
