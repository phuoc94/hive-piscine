/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:21:11 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/07 23:41:16 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count_view(int *line);

int	check_tops(int grid[4][4], int *viewpoints)
{
	int	i;
	int	j;
	int	temp[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp[j] = grid[j][i];
			j++;
		}
		if (count_view(temp) != viewpoints[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_bottoms(int grid[4][4], int *viewpoints)
{
	int	i;
	int	j;
	int	temp[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp[j] = grid[3 - j][i];
			j++;
		}
		if (count_view(temp) != viewpoints[4 + i])
			return (0);
		i++;
	}
	return (1);
}

int	check_lefts(int grid[4][4], int *viewpoints)
{
	int	i;
	int	j;
	int	temp[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp[j] = grid[i][j];
			j++;
		}
		if (count_view(temp) != viewpoints[8 + i])
			return (0);
		i++;
	}
	return (1);
}

int	check_rights(int grid[4][4], int *viewpoints)
{
	int	i;
	int	j;
	int	temp[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp[j] = grid[i][3 - j];
			j++;
		}
		if (count_view(temp) != viewpoints[12 + i])
			return (0);
		i++;
	}
	return (1);
}
