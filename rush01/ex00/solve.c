/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:32:40 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/07 23:30:51 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_views(int grid[4][4], int *viewpoints);

int    is_safe(int grid[4][4], int row, int col, int num)
{
    int i,

    i = 0;
    while (i < 4)
    {
        if (grid[row][i] == num || grid[i][col] == num)
            return (0);
        i++;
    }
    return 1;
}

void    find_next_empty(int row, int col, int *next_row, int *next_col)
{
    if (col == 3)
    {
        *next_row = row + 1;
        *next_col = 0;
    }
    else
    {
        *next_row = row;
        *next_col = col + 1;
    }
}

int     solve(int grid[4][4], int *viewpoints, int row, int col)
{
    int next_row;
    int next_col;
    int is_solve;
    int num;

    num = 1;
    find_next_empty(row, col, &next_row, &next_col);
    if (row == 4)
    {
        is_solve = check_views(grid, viewpoints);
        if (is_solve)
        {
            return (1);
        }
    }

    while (num <= 4)
    {
        if (is_safe(grid, row, col, num))
        {
            grid[row][col] = num;

            if (solve(grid, viewpoints, next_row, next_col))
            {
                return (1);
            }
            grid[row][col] = 0;
        }
        num++;
    }
    return (0);
}
