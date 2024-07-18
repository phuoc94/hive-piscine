/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_filename.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:28:36 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/07/14 19:43:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*parse_filename(char *arg)
{
	char	*filename;
	int		len;
	int		i;

	if (arg == NULL)
		return (NULL);
	len = ft_strlen(arg);
	filename = (char *)malloc(len * sizeof(char) + 1);
	if (filename == NULL)
		return (NULL);
	i = 0;
	while (arg[i])
	{
		filename[i] = arg[i];
		i++;
	}
	filename[i] = '\0';
	return (filename);
}
