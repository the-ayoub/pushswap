/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:17:23 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/14 12:35:02 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;

}					t_stack;

void push_chunks(t_stack **stack_a,t_stack **stack_b,int i);
t_stack *chunk_1(t_stack **stack_a,int i);
int					checker(char *str);
int					check_dup(char *s1, char *s2);
int					check_order(char **argv);
int					push_swap(char **argv);
int					checkers(int argc, char **argv);
int					checkints(char **argv);
int					ft_lstsize1(t_stack *stack_a);
int					min_node(t_stack **stack_a);
void				sa(t_stack *stack_a, int i);
void				sb(t_stack *stack_b, int i);
void				ss(t_stack *stack_a, t_stack *stack_b);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
void				ra(t_stack **stack_a, int i);
void				rb(t_stack **stack_b, int i);
void				rr(t_stack **stack_a, t_stack **stack_b);
void				rra(t_stack **stack_a, int i);
void				rrb(t_stack **stack_b, int i);
void				rrr(t_stack **stack_a, t_stack **stack_b);
void				sortthree(t_stack **stack_a);
void				sortfive(t_stack **stack_a, t_stack **stack_b);
void				pushmin(t_stack **stack_a, t_stack **stack_b, int p, int i);
void				ind(t_stack **stack_a, int total_nodes);
t_stack	*push(char **argv);
t_stack				*push(char **argv);
t_stack				*new_stack(void);
#endif
