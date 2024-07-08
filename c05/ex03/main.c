/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:38:00 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 12:25:03 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "Wrong input", 12);
		return (1);
	}
	printf("%s pow %s = %d\n", argv[1], argv[2],
		ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
