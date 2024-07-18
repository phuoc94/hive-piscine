/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:43:41 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/18 16:29:36 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_char_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	length_of_strs(char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (is_char_in_charset(str[i + 1], charset) == 1
			&& is_char_in_charset(str[i], charset) == 0)
			len++;
		i++;
	}
	return (len);
}

void	custom_strcpy(char *dest, char *str, char *charset)
{
	int	i;

	i = 0;
	while (is_char_in_charset(str[i], charset) == 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

void	split(char **strs, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (is_char_in_charset(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_char_in_charset(str[i + j], charset) == 0)
				j++;
			strs[word] = (char *)malloc(sizeof(char) * (j + 1));
			custom_strcpy(strs[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		strslen;

	strslen = length_of_strs(str, charset);
	strs = (char **)malloc(sizeof(char *) * (strslen + 1));
	strs[strslen] = 0;
	split(strs, str, charset);
	return (strs);
}
