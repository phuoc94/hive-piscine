/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:19:53 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 19:43:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_isspace(char c)
{
	char	whitespaces[6];
	int		i;

	whitespaces[0] = 9;
	whitespaces[1] = 10;
	whitespaces[2] = 11;
	whitespaces[3] = 12;
	whitespaces[4] = 13;
	whitespaces[5] = 32;
	i = 0;
	while (i < 6)
	{
		if (whitespaces[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	is_math_signs_negative(char *signs, int *px)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (signs[i] == '-' || signs[i] == '+')
	{
		if (signs[i] == '-')
			sum += 1;
		i++;
	}
	*px += i;
	return (sum % 2);
}

char	*ft_atoi(char *str)
{
	int		start;
	char	*result;
	int		is_negative;
	int		len;
	int		i;

	start = 0;
	len = 0;
	while (ft_isspace(str[start]))
		start++;
	is_negative = is_math_signs_negative(&str[start], &start);
	while (str[len + start] && is_num(str[len + start]))
		len++;
	if (is_negative || len < 1)
		return (NULL);
	result = (char *)malloc(len * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = str[start + i];
		i++;
	}
	return (result);
}
