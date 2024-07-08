/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:31:07 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/01 15:56:45 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	int x;
	x = ft_str_is_numeric("asdhsdfj");
	printf("asdhsdfj = %d\n", x);
	printf("123dsfgd %d\n", ft_str_is_numeric("123dsfgd"));
	printf("123 %d\n", ft_str_is_numeric("123"));
}
