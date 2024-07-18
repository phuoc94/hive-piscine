/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:58:53 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/09 19:25:04 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	len;
	int				*ptr;
	int				i;

	if (min >= max)
		return (0);
	len = max - min;
	ptr = (int *)malloc(len * sizeof(int));
	if (ptr == NULL)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
