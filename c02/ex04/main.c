/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:31:07 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/01 16:21:41 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	int x;
	x = ft_str_is_lowercase("asdhsdfj");
	char *y;
	y = "";
	printf("asdhsdfj = %d\n", x);
	printf("123dsfgd %d\n", ft_str_is_lowercase("123dsfgd"));
	printf("dsdfDFR %d\n", ft_str_is_lowercase("dsdfDFR"));
	printf("this is empty should return 1 %d\n", ft_str_is_lowercase(y));
}
