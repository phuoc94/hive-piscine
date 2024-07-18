/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:52:03 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/17 10:21:20 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		strlen;
	int		i;

	strlen = ft_strlen(src);
	ptr = (char *)malloc(strlen * sizeof(char));
	if (ptr == NULL)
	{
		return (0);
	}
	i = 0;
	while (i <= strlen)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
