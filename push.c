/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:22:06 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/15 15:51:15 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"
void pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*aux = NULL;

	tmp = (*stack_b)->next;
	aux = *stack_b;
	if(stack_a == NULL)
		(*stack_b)->next = NULL;
	else
		(*stack_b)->next = *stack_a;
	*stack_a = aux;
	*stack_b = tmp;
	printf("pa\n");
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*aux = NULL;

	tmp = (*stack_a)->next;
	aux = *stack_a;
	if (stack_b == NULL)
		(*stack_a)->next = NULL;
	else
		(*stack_a)->next = *stack_b;
	*stack_b = aux;
	*stack_a = tmp;
	printf("pb\n");
}
