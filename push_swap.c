/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:21:21 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/08 18:42:05 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

int	push_swap(char **argv)
{
	t_stack *stack_a;
	stack_a = push(argv);
	sortthree(&stack_a);
	//sa(stack_a,1);
	//rra(&stack_a,1);
	while (stack_a != NULL)
	{
		printf("a:%i\n", stack_a->value);
		stack_a = stack_a->next; 
	}
	return (0);
}
/*t_stack	*new_stack(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->top = NULL;
	new->size = 0;
	return (new);
}*/

t_stack	*ft_lstnew1(int value)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
    new->next = NULL;
	return (new);
}

t_stack	*push(char **argv)
{
	int		i;
	t_stack	*stack_a = NULL;
	t_stack *tmp;
	t_stack *root;

	tmp = NULL;
	root = stack_a; 
	root = NULL;
	i = 1;
	while (argv[i] != NULL)
	{
		if (!root)
		{
			root = ft_lstnew1(ft_atoi(argv[i]));
			tmp = root;
		}
		else
		{
			tmp->next = ft_lstnew1(ft_atoi(argv[i]));
			tmp = tmp->next;
		}
		i++;
	}
	stack_a = root;
	return(stack_a);
}
