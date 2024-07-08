/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:03:27 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 17:33:04 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_prime(int nb);

int	main(int argc, char *argv[])
{
	int	is_prime;

	if (argc != 2)
	{
		write(1, "Wrong input", 12);
		return (1);
	}
	is_prime = ft_is_prime(atoi(argv[1]));
	if (is_prime)
	{
		printf("%s is prime", argv[1]);
	}
	else
	{
		printf("%s is not prime", argv[1]);
	}
	return (0);
}
