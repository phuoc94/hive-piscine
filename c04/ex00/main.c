/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:23:29 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/03 13:37:12 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *x;
		x = argv[1];
		int len = ft_strlen(x);

		printf("len: %d", len);
		return (0);
	}

	printf("give 1 parameter and only 1");

	return (1);
}
