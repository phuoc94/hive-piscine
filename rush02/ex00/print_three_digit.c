/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_three_digit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:55:40 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 19:43:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	handle_one_or_two_digits(t_stock_dict *dict_tab, char *segment);
void	handle_two_digits(t_stock_dict *dict_tab, char *segment);
void	handle_three_digits(t_stock_dict *dict_tab, char *segment);

void	print_three_digit(t_stock_dict *dict_tab, char *segment)
{
	int	len;

	len = ft_strlen(segment);
	if (len == 1 || (len == 2 && segment[0] == '1') || ft_strcmp(segment,
			"20") == 0)
	{
		handle_one_or_two_digits(dict_tab, segment);
	}
	else if (len == 2)
	{
		handle_two_digits(dict_tab, segment);
	}
	else if (len == 3)
	{
		handle_three_digits(dict_tab, segment);
	}
}

void	handle_one_or_two_digits(t_stock_dict *dict_tab, char *segment)
{
	ft_print(dict_tab, segment);
}

void	handle_two_digits(t_stock_dict *dict_tab, char *segment)
{
	char	tens[3];
	char	units[2];

	tens[0] = segment[0];
	tens[1] = '0';
	tens[2] = '\0';
	units[0] = segment[1];
	units[1] = '\0';
	ft_print(dict_tab, tens);
	if (units[0] != '0')
	{
		ft_putstr("-");
		ft_print(dict_tab, units);
	}
}

void	handle_three_digits(t_stock_dict *dict_tab, char *segment)
{
	char	hundreds[2];
	char	rest[4];

	hundreds[0] = segment[0];
	hundreds[1] = '\0';
	rest[0] = segment[1];
	rest[1] = segment[2];
	rest[2] = '\0';
	rest[3] = '\0';
	ft_print(dict_tab, hundreds);
	ft_putstr("-");
	ft_print(dict_tab, "100");
	if (rest[0] != '0' || rest[1] != '0')
	{
		ft_putstr("-");
		print_three_digit(dict_tab, rest);
	}
}
