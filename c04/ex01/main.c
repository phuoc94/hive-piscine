/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:23:29 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/03 13:57:01 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *x;
		x = argv[1];
		ft_putstr(x);
		return (0);
	}

	printf("give 1 parameter and only 1");

	return (1);
}
