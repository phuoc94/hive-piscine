/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:28:19 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/16 12:38:08 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		strlen;
	int		i;

	strlen = ft_strlen(src);
	ptr = (char *)malloc((strlen + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (0);
	}
	i = 0;
	while (i <= strlen)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_strs;
	int			i;

	if (ac < 0)
		ac = 0;
	stock_strs = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock_strs)
		return (NULL);
	i = 0;
	while (i < ac && av[i])
	{
		stock_strs[i].size = ft_strlen(av[i]);
		stock_strs[i].str = av[i];
		stock_strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_strs[i].size = 0;
	stock_strs[i].str = 0;
	stock_strs[i].copy = 0;
	return (stock_strs);
}
