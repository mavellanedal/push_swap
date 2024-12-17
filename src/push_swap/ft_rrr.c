/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:32:23 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/16 16:53:48 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrr2(t_stack **b, int j)
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
		write(1, "rrr\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int j)
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
	ft_rrr2(b, j);
}
