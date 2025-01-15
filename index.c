/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:10:59 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/15 17:07:53 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ind(t_stack **stack_a, int total_nodes)
{
	t_stack	*tmp;
	t_stack	*aux;
	int		i;
	int		min_value;

	i = 0;
	while (i < total_nodes)
	{
		aux = *stack_a;
		tmp = NULL;
		min_value = INT_MAX;
		while (aux)
		{
			if (aux->index == 0 && aux->value < min_value)
			{
				min_value = aux->value;
				tmp = aux;
			}
			aux = aux->next;
		}
		if (tmp)
			tmp->index = i + 1;
		i++;
	}
}
t_stack	*chunk_1(t_stack **stack_a, int i)
{
	t_stack	*hold_first;
	t_stack	*hold_second;
	t_stack	*tmp;
	int		b;
	int		a;

	b = 1;
	a = 1;
	hold_first = *stack_a;
	hold_second = *stack_a;
	tmp = *stack_a;
	while (hold_first->index > 20)
	{
		hold_first = hold_first->next;
		a++;
	}
	while (tmp != NULL)
	{
		if (tmp->index <= 20)
		{
			hold_second = tmp;
			b++;
		}
		tmp = tmp->next;
	}
	b = i - b;
	if (a <= b)
		return (hold_first);
	else
		return (hold_second);
}
void	push_chunks(t_stack **stack_a, t_stack **stack_b, int i)
{
	t_stack	*tmp;
	t_stack	*target;
	int		j;

	tmp = *stack_a;
	target = chunk_1(stack_a, i);
	j = 0;
	while (tmp->index != target->index)
	{
		tmp = tmp->next;
		j++;
	}
	if (j + 1 < i / 2)
	{
		while (j > 0)
		{
			ra(stack_a, 1);
			j--;
		}
	}
	else
	{
		while (j > 0)
		{
			rra(stack_a, 1);
			j--;
		}
	}
	pb(stack_a, stack_b);
}

int	max_node(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*aux;
	int		i;

	tmp = *stack_b;
	aux = *stack_b;
	while (aux && aux->next != NULL)
	{
		if (tmp->value < aux->next->value)
			tmp = aux->next;
		aux = aux->next;
	}
	aux = *stack_b;
	i = 0;
	while (tmp->value != aux->value)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

void	sortback(t_stack **stack_a, t_stack **stack_b, int i)
{
	int j;

	j = max_node(stack_b);
	if (j + 1 < i / 2)
	{
		while (j > 0)
		{
			rb(stack_b, 1);
			j--;
		}
	}
	else
	{
		while (j > 0)
		{
			rrb(stack_b, 1);
			j--;
		}
	}
	pa(stack_a, stack_b);
}
