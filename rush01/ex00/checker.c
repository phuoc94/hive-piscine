/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:21:11 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/07 23:38:26 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_tops(int grid[4][4], int *viewpoints);
int		check_bottoms(int grid[4][4], int *viewpoints);
int		check_lefts(int grid[4][4], int *viewpoints);
int		check_rights(int grid[4][4], int *viewpoints);

int	count_view(int *line)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_views(int grid[4][4], int *viewpoints)
{
	if (!check_tops(grid, viewpoints))
		return (0);
	if (!check_bottoms(grid, viewpoints))
		return (0);
	if (!check_lefts(grid, viewpoints))
		return (0);
	if (!check_rights(grid, viewpoints))
		return (0);
	return (1);
}
