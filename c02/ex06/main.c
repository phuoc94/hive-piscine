/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:31:07 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 21:37:14 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[] = "a This string is printable";
	char	str2[] = "b This string has a tab (\t)";
	char	str3[] = "c This string has a newline (\n)";

	printf("String 1: %s (Printable: %d)\n", str1, ft_str_is_printable(str1));
	printf("String 2: %s (Printable: %d)\n", str2, ft_str_is_printable(str2));
	printf("String 3: %s (Printable: %d)\n", str3, ft_str_is_printable(str3));
	return (0);
}
