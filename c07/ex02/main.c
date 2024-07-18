/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:25:02 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/11 14:43:57 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*ptr;
	int	len;
	int	i;

	len = ft_ultimate_range(&ptr, 5, 10);
	i = 0;
	while (ptr[i])
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	return (0);
}
