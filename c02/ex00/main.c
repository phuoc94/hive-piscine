/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:19:45 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/02 16:49:57 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
        	char dest[10];
        	char *src;
        	src = argv[1];
        	ft_strcpy(dest, src);

        	printf("Copied string: %s\n", dest);
		return (0);
	}
	printf("Something is wrong");
        return 1;
}
