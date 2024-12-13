/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:57:59 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/13 17:53:13 by mavellan         ###   ########.fr       */
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
void	ft_add_back(t_stack **stack, t_stack *new_stack);
t_stack	*ft_new_stack(int number);
t_stack	*ft_lstlast2(t_stack *lst);
void	ft_freestr(char **lst);
t_stack	*ft_subprocess(char **av);
void	ft_free(t_stack **lst);

#endif