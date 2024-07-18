/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:44:51 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 22:15:29 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_memory(int lines, t_stock_dict *dict_tab, char **numbers)
{
	int	y;

	y = 0;
	while (y < lines)
	{
		free(dict_tab[y].number);
		free(dict_tab[y].text);
		y++;
	}
	y = 0;
	while (numbers[y])
	{
		free(numbers[y]);
		y++;
	}
	free(dict_tab);
	free(numbers);
}

int	handle_one_agrs(char **argv)
{
	t_stock_dict	*dict_tab;
	char			**numbers;
	int				lines;
	char			*filename;
	char			*userinput;

	filename = "numbers.dict";
	lines = get_lines(filename);
	if (lines == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	numbers = make_arr(filename);
	dict_tab = ft_dict_to_tab(lines, numbers);
	userinput = ft_atoi(argv[1]);
	if (userinput)
		print_text(dict_tab, userinput);
	else
		ft_putstr("ERROR\n");
	free(userinput);
	free_memory(lines, dict_tab, numbers);
	return (0);
}

int	handle_two_agrs(char **argv)
{
	t_stock_dict	*dict_tab;
	char			**numbers;
	int				lines;
	char			*filename;
	char			*userinput;

	filename = parse_filename(argv[1]);
	lines = get_lines(filename);
	if (lines == -1)
	{
		ft_putstr("Dict Error\n");
		free(filename);
		return (1);
	}
	numbers = make_arr(filename);
	dict_tab = ft_dict_to_tab(lines, numbers);
	userinput = ft_atoi(argv[2]);
	if (userinput)
		print_text(dict_tab, userinput);
	else
		ft_putstr("ERROR\n");
	free(userinput);
	free_memory(lines, dict_tab, numbers);
	free(filename);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		return (handle_two_agrs(argv));
	else if (argc == 2)
		return (handle_one_agrs(argv));
	else
	{
		ft_putstr("ERROR\n");
		return (1);
	}
	return (0);
}
