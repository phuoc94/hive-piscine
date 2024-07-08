/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:19:45 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/01 14:56:08 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
        char dest[10];
        char *src;
        src = "asdassd";
        ft_strncpy(dest, src, 2);

        printf("Copied string: %s\n", dest);
        return 0;
}
