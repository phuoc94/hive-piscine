/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:38:00 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 14:19:28 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_sqrt(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Wrong input", 12);
		return (1);
	}
	printf("Square Root of %s is %d\n", argv[1], ft_sqrt(atoi(argv[1])));
	return (0);
}
