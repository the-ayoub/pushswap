/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:04:01 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/08 13:06:52 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack *stack_a, int i)
{
	t_stack	*curr;
	int		tmp;

	// t_stack	*root;
	if (stack_a == NULL || stack_a->next == NULL)
		return ;
	// root = stack_a;
	curr = stack_a;
	tmp = curr->value;
	curr->value = curr->next->value;
	curr->next->value = tmp;
	// curr = root;
	if (i == 1)
		printf("sa\n");
}

void	sb(t_stack *stack_b, int i)
{
	t_stack	*curr;
	int		tmp;

	// t_stack	*root;
	if (stack_b == NULL || stack_b->next == NULL)
		return ;
	// root = stack_b;
	curr = stack_b;
	tmp = curr->value;
	curr->value = curr->next->value;
	curr->next->value = tmp;
	// curr = root;
	if (i == 1)
		printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	printf("ss\n");
}
