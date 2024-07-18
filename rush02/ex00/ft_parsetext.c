/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsetext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:13:37 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 23:24:38 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_parsetext(char *str)
{
	char	*text;
	int		i;
	int		j;
	int		len;
	int		x;

	i = 0;
	j = -1;
	len = 0;
	while (str[i] && str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	x = i;
	while ((str[i++]) && (str[i] != '\n'))
		len++;
	text = (char *)malloc(sizeof(char) * (len + 1));
	if (!text)
		return (0);
	while (++j <= len)
		text[j] = str[x + j];
	text[j] = '\0';
	return (text);
}
