/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:22:20 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/08 20:26:37 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	is_neg;

	is_neg = 0;
	if (nb < 0)
	{
		is_neg = 1;
		nb = -nb;
	}
	if (nb <= 1)
		return (1);
	if (is_neg)
		return (-(nb * ft_recursive_factorial(nb - 1)));
	return (nb * ft_recursive_factorial(nb - 1));
}
