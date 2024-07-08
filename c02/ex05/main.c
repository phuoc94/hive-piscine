/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:31:07 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/01 16:25:38 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	int x;
	x = ft_str_is_uppercase("asdhsdfj");
	char *y;
	y = "";
	printf("asdhsdfj = %d\n", x);
	printf("123dsfgd %d\n", ft_str_is_uppercase("123dsfgd"));
	printf("DFR %d\n", ft_str_is_uppercase("DFR"));
	printf("this is empty should return 1 %d\n", ft_str_is_uppercase(y));
}
