/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:16:26 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/13 19:10:41 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

int	ft_lstsize1(t_stack *stack_a)
{
	int		i;
	t_stack	*tmp;

	tmp = stack_a;
	if (!tmp)
		return (0);
	i = 0;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
int	min_node(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*aux;
	int		i;

	tmp = *stack_a;
	aux = *stack_a;
	while (aux && aux->next != NULL)
	{
		if (tmp->value > aux->next->value)
			tmp = aux->next;
		aux = aux->next;
	}
	aux = *stack_a;
	i = 1;
	while (tmp->value != aux->value)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

void	sortthree(t_stack **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (a > b && b > c)
		return ;
	else if (a > c && c < b && a > b)
		sa(*stack_a, 1), rra(stack_a, 1);
	else if (b < a && a < c)
		sa(*stack_a, 1);
	else if (b < c && c < a)
		ra(stack_a, 1);
	else if (c < a && a < b)
		rra(stack_a, 1);
	else if (c < b && b > a)
		sa(*stack_a, 1), ra(stack_a, 1);
}

void	pushmin(t_stack **stack_a, t_stack **stack_b, int p, int i)
{
	if (p == 1)
		pb(stack_a, stack_b);
	else if (p == 2)
	{
		sa(*stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (p == 3)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (p == 4 && i == 0)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (p == 5 || i == 1)
	{
		rra(stack_a, 1);
		pb(stack_a, stack_b);
	}
}
void	sortfive(t_stack **stack_a, t_stack **stack_b)
{
	int	p;

	p = min_node(stack_a);
	pushmin(stack_a, stack_b, p, 0);
	(*stack_b)->next = NULL;
	p = min_node(stack_a);
	pushmin(stack_a, stack_b, p, 1);
	sortthree(stack_a);
	pa(stack_a,stack_b);
	pa(stack_a,stack_b);
}
