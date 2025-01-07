/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:21:21 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/07 19:22:28 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

int	push_swap(char **argv)
{
	push(argv);
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

void	push(char **argv)
{
	int		i;
	t_stack	*stack_a = NULL;
	t_stack	*stack_b = NULL;
	t_stack *tmp;
	t_stack *root;
	t_stack *tmp_b;
	t_stack *root_b;

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
	i = 1;
	while (i <= 3)
	{
		if (!root_b)
		{
			root_b = ft_lstnew1(i);
			tmp_b = root_b;
		}
		else
		{
			tmp_b->next = ft_lstnew1(i);
			tmp_b = tmp_b->next;
		}
		i++;
	}
	stack_b = root_b;
	stack_a = root;
	pb(&stack_a,&stack_b);
	while (stack_b != NULL)
	{
		printf("b:%i\n", stack_b->value);
		stack_b = stack_b->next; 
	}
	while (stack_a != NULL)
	{
		printf("a:%i\n", stack_a->value);
		stack_a = stack_a->next; 
	}
}
