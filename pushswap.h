/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:17:23 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/05 14:39:32 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	//t_list	*top;
	int		value;
	int		index;
	struct s_stack *next;

}			t_stack;

void	sa_swap(t_stack *dtack_a);
int			checker(char *str);
int			check_dup(char *s1, char *s2);
int			check_order(char **argv);
int			push_swap(char **argv);
int			checkers(int argc, char **argv);
void		push(char **argv);
t_stack		*new_stack(void);
#endif
