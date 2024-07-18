/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:25:02 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/10 14:01:22 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*ptr;

	ptr = ft_range(5, 10);
	while (*ptr)
	{
		printf("%d\n", *ptr);
		ptr++;
	}
	return (0);
}
