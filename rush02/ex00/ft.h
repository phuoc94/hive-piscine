/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:53:52 by phuocngu          #+#    #+#             */
/*   Updated: 2024/07/14 22:23:58 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include "ft_stock_dict.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int					is_num(char c);
int					ft_isspace(char c);
int					ft_strlen(char *str);
void				print_three_digit(t_stock_dict *dict_tab, char *segment);
char				*ft_parsenbr(char *str);
char				*ft_parsetext(char *str);
void				print_text(t_stock_dict *dict_tab, char *input);
char				**make_arr(char *filename);
int					get_lines(char *filename);
int					get_file_length(char *filename);
char				*ft_atoi(char *str);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
void				ft_putstr(char *str);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strdup(char *str);
void				ft_print(t_stock_dict *dict_tab, char *key);
void				ft_putstr(char *str);
char				*parse_filename(char *args);
struct s_stock_dict	*ft_dict_to_tab(int ac, char **av);

#endif
