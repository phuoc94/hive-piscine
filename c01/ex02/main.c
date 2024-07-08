/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:42:39 by phuocngu          #+#    #+#             */
/*   Updated: 2024/06/28 18:58:04 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

void main(void){

	int x = 5;
	int y = 10;
	printf("before: x=%d,  y=%d \n", x, y);
	ft_swap(&x, &y);
	printf("after: x=%d,  y=%d \n", x, y);
}
