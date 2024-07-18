/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:00:21 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/07/14 20:24:32 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_index(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i])
	{
		i++;
	}
	return (i);
}

int	get_file_length(char *filename)
{
	char	buf[11];
	int		fd;
	int		len;
	int		bytes;
	int		i;

	len = 0;
	fd = open(filename, O_RDONLY);
	bytes = read(fd, buf, 10);
	while (bytes)
	{
		i = 0;
		while (buf[i])
		{
			len++;
			i++;
		}
		bytes = read(fd, buf, 10);
	}
	close(fd);
	return (len);
}

int	get_lines(char *filename)
{
	int		lines;
	char	buf[11];
	int		fd;
	int		bytes;
	int		i;

	lines = 0;
	fd = open(filename, O_RDONLY);
	if (fd == (-1))
		return (-1);
	bytes = read(fd, buf, 10);
	while (bytes)
	{
		i = 0;
		while (buf[i])
		{
			if (buf[i] == '\n')
				lines++;
			i++;
		}
		bytes = read(fd, buf, 10);
	}
	close(fd);
	return (lines - 1);
}

char	**fill_arr(int lines, int len, char *buffer, char *filename)
{
	int		bytes;
	int		fd;
	int		i;
	int		col;
	char	**arr;

	buffer = (char *)malloc(len * sizeof(char) + 1);
	arr = (char **)malloc(lines * sizeof(char *) + 1);
	fd = open(filename, O_RDONLY);
	bytes = read(fd, buffer, len);
	col = 0;
	while (bytes)
	{
		i = 0;
		while (buffer[i])
		{
			arr[col++] = ft_strdup(&buffer[i]);
			i += get_index(&buffer[i]) + 1;
		}
		bytes = read(fd, buffer, len);
	}
	free(buffer);
	close(fd);
	return (arr);
}

char	**make_arr(char *filename)
{
	int		len;
	int		lines;
	char	**arr;
	char	*buffer;

	lines = get_lines(filename);
	len = get_file_length(filename);
	buffer = NULL;
	arr = fill_arr(lines, len, buffer, filename);
	return (arr);
}
