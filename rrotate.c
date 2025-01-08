/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:06:38 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/08 12:38:29 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"
void rra(t_stack **stack_a, int i)
{
	t_stack *tmp;
	t_stack	*aux;
	
	tmp = *stack_a;
	aux = *stack_a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next = NULL; 
	tmp->next = *stack_a;
	*stack_a = tmp;
	if(i == 1)
		printf("rra\n");
}

void rrb(t_stack **stack_b, int i)
{
	t_stack *tmp;
	t_stack	*aux;
	
	tmp = *stack_b;
	aux = *stack_b;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next = NULL; 
	tmp->next = *stack_b;
	*stack_b = tmp;
	if(i == 1)
		printf("rrb\n");
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	printf("rrr\n");
}
