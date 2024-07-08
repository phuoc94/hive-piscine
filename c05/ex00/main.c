/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:22:20 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 11:39:15 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Wrong input", 12);
		return (1);
	}
	printf("%s! = %d\n", argv[1], ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
