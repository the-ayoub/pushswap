/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:25:39 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/06 19:34:31 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

int	checkints(char **argv)
{
	long	a;
	int		i;

	i = 1;
	while (argv[i])
	{
		a = ft_atoi(argv[i]);
		if (a > INT_MAX || a < INT_MIN)
		{
			printf("error");
			return (-1);
		}
		i++;
	}
	return (0);
}

int	checker(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
		break ;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			printf("error\n");
			return (-1);
		}
		i++;
	}
	if ((i == 1 && str[0] == '-') || (i == 1 && str[0] == '+'))
	{
		printf("error\n");
		return (-1);
	}
	return (1);
}

int	check_dup(char *s1, char *s2)
{
	int	a;
	int	b;

	a = ft_atoi(s1);
	b = ft_atoi(s2);
	if (a == b)
	{
		printf("%s", "error");
		return (-1);
	}
	return (1);
}

int	check_order(char **argv)
{
	int	a;
	int	b;
	int	i;

	i = 1;
	while (argv[i] && argv[i + 1])
	{
		a = ft_atoi(argv[i]);
		b = ft_atoi(argv[i + 1]);
		if (a > b)
			return (-1);
		i++;
	}
	return (1);
}
int	checkers(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		if (checker(argv[i]) == -1)
			return (-1);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (argv[i] && argv[j])
		{
			if (check_dup(argv[i], argv[j]) != 1)
				return (-1);
			j++;
		}
		i++;
	}
	if (check_order(argv) != 1)
		push_swap(argv);
	return (0);
}
