/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:15:03 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 20:19:03 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;
	int	is_neg;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		is_neg = 1;
		nb = -nb;
	}
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	if (is_neg)
	{
		return (-result);
	}
	return (result);
}
