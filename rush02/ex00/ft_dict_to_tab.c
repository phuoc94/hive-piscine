/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:28:19 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 20:44:50 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

struct s_stock_dict	*ft_dict_to_tab(int ac, char **av)
{
	t_stock_dict	*stock_strs;
	int				i;
	char			*temp;

	stock_strs = (t_stock_dict *)malloc(ac * (sizeof(t_stock_dict) + 1));
	i = 0;
	while (i < ac)
	{
		temp = ft_parsenbr(av[i]);
		stock_strs[i].size = ft_strlen(temp);
		stock_strs[i].number = ft_parsenbr(av[i]);
		stock_strs[i].text = ft_parsetext(av[i]);
		free(temp);
		i++;
	}
	stock_strs[i].size = 0;
	stock_strs[i].number = NULL;
	stock_strs[i].text = NULL;
	return (stock_strs);
}
