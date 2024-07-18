/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:11:18 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 19:43:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*clone;

	i = 0;
	len = 0;
	while (str[len] != '\n' && str[len])
	{
		len++;
	}
	clone = (char *)malloc(len * sizeof(char) + 1);
	while (i < len)
	{
		clone[i] = str[i];
		i++;
	}
	return (clone);
}
