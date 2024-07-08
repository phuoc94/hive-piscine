/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:52:52 by phuocngu          #+#    #+#             */
/*   Updated: 2024/06/29 13:54:09 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int     main(void)
{
        int divx;
        int modx;

        divx = 11;
        modx = 5;

        ft_ultimate_div_mod(&divx, &modx);

        printf("%d, %d", divx, modx);
}

