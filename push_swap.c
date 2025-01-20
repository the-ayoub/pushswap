/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:21:21 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/20 17:11:13 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

int	push_swap(char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b = NULL;
	int		i;
	int		b;
	int		chunk_size;
	int		pos;

	b = 0;
	stack_a = push(argv);
	i = ft_lstsize1(stack_a);
	if (i <= 3)
 		sortthree(&stack_a);
	if (i == 4 || i == 5)
		sortfive(&stack_a, &stack_b);
	else
	{
		ind(&stack_a, i);
		chunk_size = i / 5;
		while (b < i)
		{
			pos = ((b / chunk_size) + 1) * chunk_size;
			push_chunks(&stack_a, &stack_b, i - b, pos);
			b++;
		}
		while (stack_b != NULL)
			sortback(&stack_a, &stack_b, i);
	}
	/*while (stack_a != NULL)
	{
		printf("a:%i     ind:%d\n", stack_a->value, stack_a->index);
		stack_a = stack_a->next;
	}*/
	return (0);
}

t_stack	*ft_lstnew1(int value)
{
	t_stack	*new;

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
	t_stack	*stack_a;
	t_stack	*tmp;
	t_stack	*root;

	stack_a = NULL;
	tmp = NULL;
	root = NULL;
	i = 1;
	while (argv[i] != NULL)
	{
		if (!root)
		{
			root = ft_lstnew1(ft_atoi(argv[i]));
			root->index = -1;
			tmp = root;
		}
		else
		{
			tmp->next = ft_lstnew1(ft_atoi(argv[i]));
			tmp->next->index = -1;
			tmp = tmp->next;
		}
		i++;
	}
	stack_a = root;
	return (stack_a);
}
