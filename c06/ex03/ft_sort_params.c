/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:27:05 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/16 19:34:48 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap_str(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
		{
			return (result);
		}
		i++;
	}
	return (0);
}

void	ft_sort_tabs(char **tab, int size)
{
	int	i;
	int	end;

	end = size;
	while (end > 0)
	{
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap_str(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		end--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_tabs(argv, argc);
	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
		return (0);
	}
	return (1);
}
