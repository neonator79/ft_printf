# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 18:02:05 by ysitkevi          #+#    #+#              #
#    Updated: 2024/01/12 18:02:05 by ysitkevi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I./include

RM = rm -f

SRCS = src/ft_printf.c src/ft_convers.c src/ft_putchar.c src/ft_type_char.c \
	src/ft_type_hex.c src/ft_type_int.c src/ft_type_pointer.c src/ft_type_str.c \
	src/ft_type_uint.c src/ft_putstr_len.c\
	libft/ft_itoa.c libft/ft_putchar_fd.c libft/ft_strdup.c libft/ft_strjoin.c \
	libft/ft_strlen.c libft/ft_memcpy.c 


CFLAGS += -I./include

OBJS = $(SRCS:.c=.o)

# LIBFTDIR = libft
# LIBFT = $(LIBFTDIR)/libft.a


all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re