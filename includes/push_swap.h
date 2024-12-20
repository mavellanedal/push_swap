/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:57:59 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/20 16:09:02 by mavellan         ###   ########.fr       */
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
# include "../ft_printf/ft_printf.h"

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
int		ft_check_sorted(t_stack *stack_a);
void	ft_sa(t_stack **a, int i);
void	ft_sb(t_stack **b, int i);
void	ft_ss(t_stack **a, t_stack **b, int i);
void	ft_ra(t_stack **a, int i);
void	ft_rb(t_stack **b, int i);
void	ft_rr(t_stack **a, t_stack **b, int i);
void	ft_rra(t_stack **a, int j);
void	ft_rrb(t_stack **b, int j);
void	ft_rrr(t_stack **a, t_stack **b, int j);
void	ft_rrr2(t_stack **b, int j);
void	ft_pa(t_stack **a, t_stack **b, int i);
void	ft_pb(t_stack **a, t_stack **b, int i);
int		ft_lstsize2(t_stack *lst);
void	ft_sort(t_stack **stack_a);
t_stack	*ft_sort_b(t_stack **stack_a);
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);
int		ft_find_index(t_stack *a, int nbr);
void	ft_sort_three_num(t_stack **stack_a);
void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
int		ft_find_place_b(t_stack *stack_b, int nbr_push);
int		ft_find_place_a(t_stack *stack_b, int nbr_push);
int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_rotate_type_ab(t_stack *a, t_stack *b);
int		ft_rotate_type_ba(t_stack *a, t_stack *b);
int		ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);

#endif