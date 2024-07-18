/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:11:10 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/10 15:29:02 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *strs[] = {"aa", "bb", "cc", "dd"};
	char *sep = ",";
	char *newstring;
	newstring = ft_strjoin(4, strs, sep);
	printf("combed: %s", newstring);
	return (0);
}
