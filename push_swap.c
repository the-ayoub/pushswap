/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:21:21 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/05 16:32:22 by aybelhaj         ###   ########.fr       */
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
	//t_list	*new;
	//t_list	*new2;
	t_stack	*stack_a = NULL;

	t_stack *curr;
	t_stack *root;

	curr = NULL;
	root = stack_a;
	//a = new_stack();
	i = 1;
	while (argv[i] != NULL)
	{
		if (!root)
		{
			root = ft_lstnew1(ft_atoi(argv[i]));
			curr = root;
		}
		else
		{
				//curr->next->value = 5;
				//printf("%d", curr->next->value);
			curr->next = ft_lstnew1(ft_atoi(argv[i]));
			curr = curr->next;
		}
			//ft_lstadd_back(&new, new2);
		i++;
	}
	stack_a = root;
	sa_swap(stack_a);
//	a->top = new;
//	a->size = ft_lstsize(new);
	while (stack_a != NULL)
	{
		printf("%i\n", stack_a->value);
		stack_a = stack_a->next;
	}
	//return ;
}
