/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsenbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:13:24 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 19:43:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_parsenbr(char *str)
{
	char	*number;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (is_num(str[i]))
	{
		i++;
	}
	number = (char *)malloc(sizeof(char) * (i + 1));
	if (!number)
		return (0);
	while (j < i)
	{
		number[j] = str[j];
		j++;
	}
	number[j] = '\0';
	return (number);
}
