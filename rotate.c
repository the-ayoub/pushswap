/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:58:20 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/08 11:57:30 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	ra(t_stack **stack_a,int i)
{
	t_stack	*tmp;
	t_stack	*aux;

	tmp = (*stack_a)->next;
	aux = tmp;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = tmp;
	if(i == 1)
		printf("ra\n");
}

void	rb(t_stack **stack_b,int i)
{
	t_stack	*tmp;
	t_stack	*aux;

	tmp = (*stack_b)->next;
	aux = tmp;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = *stack_b;
	(*stack_b)->next = NULL;
	*stack_b = tmp;
	if(i == 1)
		printf("rb\n");
}


void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a,0);
	rb(stack_b,0);
	printf("rr\n");
}
