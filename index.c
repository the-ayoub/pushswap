/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:10:59 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/13 21:01:24 by aybelhaj         ###   ########.fr       */
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

