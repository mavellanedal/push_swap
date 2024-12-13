/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:57:59 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/12 18:00:12 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stck	*prev;
}	t_stack;

void	ft_error_message(void);
t_stack	*ft_check_arg(int ac, char **av);
int		ft_atoi2(const char *str);
int		ft_check_dup(t_stack *a);
t_stack	*ft_add_back(t_stack **stack, t_stack *new_stack);
t_stack	*ft_new_stack(int number);

#endif