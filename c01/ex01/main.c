/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:45:25 by phuocngu          #+#    #+#             */
/*   Updated: 2024/06/28 11:38:13 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

void main(void)
{
	int x = 1;
    	int *x2 = &x;
    	int **x3 = &x2;
    	int ***x4 = &x3;
    	int ****x5 = &x4;
	int *****x6 = &x5;
	int ******x7 = &x6;
	int *******x8 = &x7;
	int ********x9 = &x8;

	ft_ultimate_ft(&x9);

	printf("%d\n",x);
}
