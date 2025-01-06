/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:19:20 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/01/06 19:35:58 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		if(checkints(argv) == -1)
			return(0);
		checkers(argc, argv);
		return (0);
	}
	printf("erorr");
}
