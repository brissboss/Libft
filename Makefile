# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 16:43:29 by tbrissia          #+#    #+#              #
#    Updated: 2022/06/05 11:32:45 by theo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	simple/ft_isalpha.c				\
			simple/ft_isdigit.c				\
			simple/ft_isalnum.c				\
			simple/ft_isascii.c				\
			simple/ft_isprint.c				\
			simple/ft_toupper.c				\
			simple/ft_tolower.c				\
			fd/ft_putchar_fd.c				\
			fd/ft_putendl_fd.c				\
			fd/ft_putnbr_fd.c				\
			fd/ft_putstr_fd.c				\
			mem/ft_bzero.c					\
			mem/ft_calloc.c					\
			mem/ft_memchr.c					\
			mem/ft_memcmp.c					\
			mem/ft_memcpy.c					\
			mem/ft_memmove.c				\
			mem/ft_memset.c					\
			other/ft_atoi.c					\
			other/ft_itoa.c					\
			other/ft_split.c				\
			str/ft_strchr.c					\
			str/ft_strdup.c					\
			str/ft_striteri.c				\
			str/ft_strjoin.c				\
			str/ft_strlcat.c				\
			str/ft_strlcpy.c				\
			str/ft_strlen.c					\
			str/ft_strmapi.c				\
			str/ft_strncmp.c				\
			str/ft_strnstr.c				\
			str/ft_strrchr.c				\
			str/ft_strtrim.c				\
			str/ft_substr.c					\
			gnl/get_next_line_utils.c		\
			gnl/get_next_line.c				\
			ft_printf/ft_bin_hex.c			\
			ft_printf/ft_putnbr_base_fd.c	\
			ft_printf/ft_putnbr_pr_fd.c		\
			ft_printf/ft_putuns_fd.c		\
			ft_printf/ft_printf.c			\

OBJS	=	$(SRCS:.c=.o)

GCC 	=	gcc

RM		=	rm -f

FLAGS	=	-Wall -Werror -Wextra

NAME	=	libft.a

.c.o:
	@$(GCC) $(FLAGS) -c -I. $< -o ${<:.c=.o}


$(NAME):	$(OBJS)
			@ar rcs $@ $^

all:		$(NAME)
			@echo "\033[1;32mLibrary compilation ... ⏳"

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME) a.out

re:			fclean all

.PHONY:		all clean fclean re
