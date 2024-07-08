/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:39:20 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/03 17:11:22 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char *ustr = argv[1];
		char *utofind = argv[2];
		
		char *x = ft_strstr(ustr, utofind);
		char *a = strstr(ustr, utofind);

		printf("%s == %s", x, a);
		return (0);
	}

	printf("give 2 params");
	return (1);
}
