/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 21:14:06 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/09 18:13:43 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(char *str, int *viewpoints);
void	print_grid(int grid[4][4]);
int		solve(int grid[4][4], int *viewpoints, int row, int col);

void	initialize_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	viewpoints[16];
	int	grid[4][4];

	initialize_grid(grid);
	if (argc != 2)
	{
		write(1, "Error\n", 7);
		return (1);
	}
	if (!parse_input(argv[1], viewpoints))
	{
		write(1, "Error\n", 7);
		return (1);
	}
	if (solve(grid, viewpoints, 0, 0))
	{
		print_grid(grid);
	}
	else
	{
		write(1,"can't solve",12);
	}
	return (0);
}
