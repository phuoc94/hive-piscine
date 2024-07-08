/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:19:00 by phuocngu          #+#    #+#             */
/*   Updated: 2024/06/30 15:19:38 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
        int size = 5;
        int numbers[5] = {25,50,75,100,125};
        ft_rev_int_tab(numbers, size);


        int i = 0;
        while(i < size)
        {
                printf("%d\n", numbers[i]);
                i++;
        }

        return 0;
}
