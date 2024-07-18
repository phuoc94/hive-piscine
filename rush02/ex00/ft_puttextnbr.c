/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttextnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:13:48 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 19:43:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
		{
			return (result);
		}
		i++;
	}
	return (0);
}

void	ft_print(t_stock_dict *dict_tab, char *input)
{
	int	i;

	i = 0;
	while (dict_tab[i].number)
	{
		if (ft_strcmp(input, dict_tab[i].number) == 0)
		{
			ft_putstr(dict_tab[i].text);
		}
		i++;
	}
}

void	ft_print_tens_power(t_stock_dict *dict_tab, int len)
{
	int	i;
	int	closest_size;

	i = 0;
	closest_size = -1;
	if (len < 3)
		return ;
	while (dict_tab[i].size)
	{
		if (dict_tab[i].size <= len && dict_tab[i].size > closest_size)
			closest_size = dict_tab[i].size;
		i++;
	}
	if (closest_size != -1)
	{
		i = -1;
		while (dict_tab[++i].size)
		{
			if (dict_tab[i].size == closest_size)
			{
				ft_putstr(dict_tab[i].text);
				break ;
			}
		}
	}
}

void	print_text(t_stock_dict *dict_tab, char *input)
{
	int		len;
	int		i;
	int		group_len;
	char	group[4];

	len = ft_strlen(input);
	i = 0;
	while (len > 0)
	{
		group_len = len % 3;
		if (group_len == 0)
			group_len = 3;
		ft_strncpy(group, input + i, group_len);
		group[group_len] = '\0';
		print_three_digit(dict_tab, group);
		if (len > 3)
		{
			ft_putstr("-");
			ft_print_tens_power(dict_tab, len);
			ft_putstr("-");
		}
		len -= group_len;
		i += group_len;
	}
	ft_putstr("\n");
}
