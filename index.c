/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:10:59 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/18 14:27:28 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*void	ind(t_stack **stack_a, int total_nodes)
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
}*/
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
			if (aux->index == -1 && aux->value < min_value)
			{
				min_value = aux->value;
				tmp = aux;
			}
			aux = aux->next;
		}
		if (tmp)
			tmp->index = i; // Cambiado de i + 1 a i
		i++;
	}
}
t_stack	*chunk_1(t_stack **stack_a, int i, int pos)
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
	while (hold_first->index > pos)
	{
		hold_first = hold_first->next;
		a++;
	}
	while (tmp != NULL)
	{
		if (tmp->index <= pos)
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
/*t_stack *chunk_1(t_stack **stack_a, int pos)
{
    t_stack *hold_first = NULL;
    t_stack *hold_second = NULL;
    t_stack *tmp = *stack_a;

    while (tmp)
    {
        if (tmp->index <= pos)
        {
            if (!hold_first)
                hold_first = tmp;
            hold_second = tmp;
        }
        tmp = tmp->next;
    }

    if (!hold_first)
        return NULL;

    return hold_first;
}*/

/*void	push_chunks(t_stack **stack_a, t_stack **stack_b, int i, int pos)
{
	t_stack	*tmp;
	t_stack	*target;
	int		j;

	tmp = *stack_a;
	target = chunk_1(stack_a, i, pos);
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
}*/

void push_chunks(t_stack **stack_a, t_stack **stack_b, int i, int pos)
{
    t_stack *tmp = *stack_a;
    t_stack *target = chunk_1(stack_a,i, pos);
    int j = 0;

    while (tmp->index != target->index)
    {
        tmp = tmp->next;
        j++;
    }
    if (j > 0)
    {
        if (j < i / 2)
        {
            while (j-- > 0)
                ra(stack_a, 1);
        }
        else
        {
            while (j++ < i)
                rra(stack_a, 1);
        }
    }
    pb(stack_a, stack_b);
	if((*stack_b)->index > pos/2)
		rrb(stack_b,1);
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

/*int max_node(t_stack **stack_b)
{
    t_stack *tmp = *stack_b;
    t_stack *max_node = *stack_b;
    int i = 0, max_value = INT_MIN;

    if (!stack_b || !(*stack_b))
	    return -1;
    while (tmp)
    {
        if (tmp->value > max_value)
        {
            max_value = tmp->value;
            max_node = tmp;
        }
        tmp = tmp->next;
    }
    tmp = *stack_b;
    while (tmp != max_node)
    {
        tmp = tmp->next;
        i++;
    }
    return i;
}*/

void sortback(t_stack **stack_a, t_stack **stack_b, int i)
{
    while (*stack_b)
    {
        int j = max_node(stack_b);

        if (j < (i / 2))
        {
            while (j-- > 0)
                rb(stack_b, 1);
        }
        else
        {
            while (j < i)
			{
                rrb(stack_b, 1);
				j++;
			}
        }

        pa(stack_a, stack_b);
    }
}

