/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:19:00 by phuocngu          #+#    #+#             */
/*   Updated: 2024/06/30 17:32:06 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
        int size = 5;
        int numbers[5] = {5, 1, 4, 2, 8};
        ft_sort_int_tab(numbers, size);


        int i = 0;
        while(i < size)
        {
                printf("%d\n", numbers[i]);
                i++;
        }

        return 0;
}
