/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:20:56 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/02 19:19:00 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[20] = "asd";
	char src[6] = "tsdff";

	printf("dest = %s, src = %s\n", dest, src);

	ft_strncat(dest, src, 2);
	
	printf("dest = %s, src = %s\n", dest, src);
}
