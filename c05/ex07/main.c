/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:03:27 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 20:57:00 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char *argv[])
{
	int	prime;

	if (argc != 2)
	{
		write(1, "Wrong input", 12);
		return (1);
	}
	prime = ft_find_next_prime(atoi(argv[1]));
	printf("%s next prime is %d", argv[1], prime);
	return (0);
}
