# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafujima <mafujima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/27 23:04:26 by mafujima          #+#    #+#              #
#    Updated: 2025/08/30 00:02:07 by mafujima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 

CC = cc

CFLAGS = -Wall -Wextra -Werror -Ilibft

SRC = \
	c_char_or_wchar_output.c \
	d_signed_decimal.c \
	ft_printf.c \
	ft_putnbr_base.c \
	p_void2hexd.c \
	percent_literal_output.c \
	s_string.c \
	u_unsigned_decimal.c \
	x_hex2hex_lower.c \
	x_hex2hex_upper.c \

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

FT_NAME = libft

$(FT_NAME).a:
	$(MAKE) -C libft

$(NAME) : $(OBJ) $(FT_NAME).a
	cp $(FT_NAME)/$(FT_NAME).a $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libftprintf.h libft/libft.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm  -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
