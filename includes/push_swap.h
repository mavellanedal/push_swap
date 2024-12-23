/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:57:59 by mavellan          #+#    #+#             */
/*   Updated: 2024/12/23 18:45:18 by mavellan         ###   ########.fr       */
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

//Struct
typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stck	*prev;
}	t_stack;

// File checks.c
t_stack	*ft_check_arg(int ac, char **av);
t_stack	*ft_subprocess(char **av);
int		ft_check_dup(t_stack *a);

//File ft_add_back.c
void	ft_add_back(t_stack **stack, t_stack *new_stack);

// File ft_check_sorted.c
int		ft_check_sorted(t_stack *stack_a); //OK

//File ft_error_message.c
void	ft_error_message(void);

//File ft_free.c
void	ft_free(t_stack **lst);

//File ft_new_stack.c
t_stack	*ft_new_stack(int number);

//File ft_rotate_and_push.c
int		ft_apply_rarb(t_stack **a, t_stack **b, int c, char s); //OK
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s); //OK
int		ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s); //OK
int		ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s); //OK

//File ft_rotat_type.c
int		ft_rotate_type_ab(t_stack *a, t_stack *b); //OK
int		ft_rotate_type_ba(t_stack *a, t_stack *b); //OK

//File ft_rrr.c
void	ft_rrr(t_stack **a, t_stack **b, int j); //OK
void	ft_rrr2(t_stack **b, int j); //OK

//File ft_sort_three_num.c
void	ft_sort_three_num(t_stack **stack_a); //OK Modifyed

//File ft_sort.c
void	ft_sort(t_stack **stack_a); //OK
t_stack	*ft_sort_b(t_stack **stack_a); //OK
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b); //OK
void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b); //OK

//File lst_utils.c
t_stack	*ft_lstlast2(t_stack *lst); //OK
int		ft_lstsize2(t_stack *lst); //OK
int		ft_min(t_stack *a); //Ok
int		ft_max(t_stack *a); //OK
int		ft_find_index(t_stack *a, int nbr); //OK

//File lst_utils2.c
int		ft_find_place_b(t_stack *stack_b, int nbr_push); //OK
int		ft_find_place_a(t_stack *stack_b, int nbr_push); //OK modifyed

//File pushes.c
void	ft_pa(t_stack **a, t_stack **b, int i); //OK
void	ft_pb(t_stack **a, t_stack **b, int i); //OK

//File rotates.c
void	ft_ra(t_stack **a, int i); //OK
void	ft_rb(t_stack **b, int i); //OK
void	ft_rr(t_stack **a, t_stack **b, int i); //OK
void	ft_rra(t_stack **a, int j); //OK
void	ft_rrb(t_stack **b, int j); //OK

//File solver_utils.c
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c); //OK
int		ft_case_rarb(t_stack *a, t_stack *b, int c); //OK
int		ft_case_rrarb(t_stack *a, t_stack *b, int c); //OK
int		ft_case_rarrb(t_stack *a, t_stack *b, int c); //OK

//File solver_utils2.c
int		ft_case_rarb_a(t_stack *a, t_stack *b, int c); //OK
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int c); //OK
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int c); //OK
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int c); //OK

//File swaps.c
void	ft_sa(t_stack **a, int i); //OK
void	ft_sb(t_stack **b, int i); //OK
void	ft_ss(t_stack **a, t_stack **b, int i); //OK

//File utils.c
int		ft_atoi2(const char *str); //Ok modifyed
void	ft_freestr(char **lst); //OK

//--------------------------------------CHECKER-----------------------------

//File checker_utils.c
void	ft_error_ch(void);

//File chekcer.c
void	ft_checker_sub(t_stack **a, t_stack **b, char *line);
char	*ft_check(t_stack **a, t_stack **b, char *line);
void	ft_check_sub(t_stack **a, t_stack **b, char *line);

#endif