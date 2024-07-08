/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:20:56 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/03 17:49:12 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[20] = "asd";
	char src[6] = "tsdff";

	printf("dest = %s, src = %s\n", dest, src);

	ft_strcat(dest, src);
	
	printf("dest = %s, src = %s\n", dest, src);
}
