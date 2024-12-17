/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:10:07 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/16 16:53:31 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ra(t_stack **a, int i)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next))
		return ;
	tmp = *a;
	*a = ft_lstlast2(*a);
	(*a)->next = tmp;
	tmp->next = NULL;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*b || !((*b)->next))
		return ;
	tmp = *b;
	*b = ft_lstlast2(*b);
	(*b)->next = tmp;
	tmp->next = NULL;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	ft_rra(t_stack **a, int j)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	if (!*a || !((*a)->next))
		return ;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (1 < i)
	{
		tmp = tmp->next;
		i--;
	}
	if (j == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b, int j)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *b;
	if (!*b || !((*b)->next))
		return ;
	while ((*b)->next)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (1 < i)
	{
		tmp = tmp->next;
		i--;
	}
	if (j == 0)
		write(1, "rrb\n", 4);
}

void	ft_rr(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	*a = ft_lstlast2(*a);
	(*a)->next = tmp;
	tmp->next = NULL;
	tmp = *b;
	*b = ft_lstlast2(*b);
	(*b)->next = tmp;
	tmp->next = NULL;
	if (i == 0)
		write(1, "rr\n", 3);
}
