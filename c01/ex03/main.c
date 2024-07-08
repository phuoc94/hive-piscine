/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:52:52 by phuocngu          #+#    #+#             */
/*   Updated: 2024/06/29 13:57:26 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int     main(void)
{
        int divx;
        int modx;

        ft_div_mod(11, 5, &divx, &modx);

        printf("%d, %d", divx, modx);
}

