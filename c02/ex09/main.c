/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:31:07 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/02 20:59:11 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	
	char y[] = "salut, comment tu vas ? 42mots quaRante-deux; cinquante+et+un";

	printf("salut, comment tu vas ? 42mots quaRante-deux; cinquante+et+un\n%s\n", ft_strcapitalize(y));
}
