/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:17:23 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/07 19:20:40 by aybelhaj         ###   ########.fr       */
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

int					checker(char *str);
int					check_dup(char *s1, char *s2);
int					check_order(char **argv);
int					push_swap(char **argv);
int					checkers(int argc, char **argv);
int					checkints(char **argv);
void				push(char **argv);
void				sa(t_stack *stack_a, int i);
void				sb(t_stack *stack_b, int i);
void				ss(t_stack *stack_a, t_stack *stack_b);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
t_stack				*new_stack(void);
#endif
