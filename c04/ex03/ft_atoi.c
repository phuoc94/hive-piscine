/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:19:53 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/07 15:30:19 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	str_to_int(char *str)
{
	int	result;
	int	nblen;

	nblen = 0;
	result = 0;
	while (str[nblen] >= '0' && str[nblen] <= '9')
	{
		nblen++;
	}
	str[nblen] = '\0';
	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	start;
	int	result;
	int	is_negative;

	start = 0;
	while (ft_isspace(str[start]))
	{
		start++;
	}
	is_negative = is_math_signs_negative(&str[start], &start);
	result = str_to_int(&str[start]);
	if (is_negative)
	{
		result = -result;
	}
	return (result);
}
