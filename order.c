/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:16:26 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/08 19:41:01 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"
void sortthree(t_stack **stack_a)
{
	int a;
	int b;
	int c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	/*if{
	if(a>b && a>c && b>c)
	{
		sa(*stack_a,1);
		rra(stack_a,1);
	}
	else
	{
		ra(stack_a,1);
	if(b>a && a>c)
	{
		rra(stack_a,1);
	}
	else if(b>a && a>c)
	{
		sa(*stack_a,1);
		ra(stack_a,1);
	}	
	else
		sa(*stack_a,1);*/
}
