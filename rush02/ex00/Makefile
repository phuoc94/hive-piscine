# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 11:47:41 by mhurtamo          #+#    #+#              #
#    Updated: 2024/07/14 18:24:00 by phuocngu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEAD = ./

SRCS = ft_dict_to_tab.c ft_parsetext.c ft_puttextnbr.c get_numbers.c main.c print_three_digit.c ft_parsenbr.c ft_atoi.c ft_strncpy.c ft_strdup.c parse_filename.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

EXEC = rush-02

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) -I$(HEAD)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I$(HEAD)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)


