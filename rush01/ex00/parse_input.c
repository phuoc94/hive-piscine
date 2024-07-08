/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:28:22 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/07 23:17:52 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < 32)
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
			{
				return (0);
			}
		}
		else
		{
			if (str[i] != ' ')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	parse_input(char *str, int *viewpoints)
{
	int	i;

	i = 0;
	if (!is_valid_input(str))
	{
		return (0);
	}
	while (i < 16)
	{
		viewpoints[i] = str[i * 2] - '0';
		i++;
	}
	return (1);
}
