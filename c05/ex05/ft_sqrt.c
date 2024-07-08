/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:29:44 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 14:20:13 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	root;

	i = 1;
	root = 0;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		root++;
	}
	if (nb == 0)
	{
		return (root);
	}
	else
		return (0);
}
