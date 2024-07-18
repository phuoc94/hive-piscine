/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:43:41 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/18 11:07:52 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

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
	return (0);
}

int	length_of_strs(char *str, char *charset)
{
	int	len;
	int	i;
	int	in_word;

	in_word = 0;
	len = 0;
	i = 0;
	while (str[i])
	{
		if (!is_char_in_charset(str[i], charset))
		{
			if (!in_word)
			{
				in_word = 1;
				len++;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		strlen;
	int		i;
	int		j;
	char	*testi;

	strs = (char **)malloc((length_of_strs(str, charset) + 1)
			* (sizeof(char *)));
	i = -1;
	j = 0;
	while (str[++i])
	{
		strlen = 0;
		while (!is_char_in_charset(str[i + strlen], charset) && charset[0])
			strlen++;
		testi = (char *)malloc((strlen + 1) * sizeof(char));
		if (!testi || !strs)
			return (NULL);
		strs[j] = ft_strncpy(testi, &str[i], strlen);
		i += strlen;
		if (strlen)
			j++;
	}
	strs[j] = 0;
	return (strs);
}
