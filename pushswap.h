/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:17:23 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/06 19:35:31 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int		value;
	int		index;
	struct s_stack *next;

}			t_stack;

int			checker(char *str);
int			check_dup(char *s1, char *s2);
int			check_order(char **argv);
int			push_swap(char **argv);
int			checkers(int argc, char **argv);
void		push(char **argv);
void	sa_swap(t_stack *stack_a,int i);
void	sa_swap(t_stack *stack_b,int i);
void	ss_swap(t_stack *stack_a, t_stack *stack_b);
t_stack		*new_stack(void);
#endif
