/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:02:51 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/10 15:38:15 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	add_sep(char *str, char *sep)
{
	int	len;
	int	seplen;

	len = ft_strlen(str);
	seplen = 0;
	while (sep[seplen])
	{
		str[len + seplen] = sep[seplen];
		seplen++;
	}
	return (seplen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		i;
	int		j;
	int		new_str_index;

	new_str = (char *)malloc(size * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	new_str_index = 0;
	while (strs[i] && i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			new_str[new_str_index] = strs[i][j];
			new_str_index++;
			j++;
		}
		if (i < (size - 1))
			new_str_index += add_sep(new_str, sep);
		i++;
	}
	return (new_str);
}
