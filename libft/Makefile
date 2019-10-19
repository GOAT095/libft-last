# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anassif <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 13:10:03 by anassif           #+#    #+#              #
#    Updated: 2019/10/15 13:10:07 by anassif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_atoi.c\
		ft_itoa.c\
		ft_putendl_fd.c\
		ft_strlcpy.c\
		ft_tolower.c\
		ft_bzero.c\
		ft_memccpy.c\
		ft_putnbr_fd.c\
		ft_strlen.c\
		ft_toupper.c\
		ft_calloc.c\
		ft_memchr.c\
		ft_putstr_fd.c\
		ft_strmapi.c\
		ft_isalnum.c\
		ft_memcmp.c\
		ft_split.c\
		ft_strncmp.c\
		ft_isalpha.c\
		ft_memcpy.c\
		ft_strchr.c\
		ft_strnstr.c\
		ft_isascii.c\
		ft_memmove.c\
		ft_strdup.c\
		ft_strrchr.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_isprint.c\
		ft_putchar_fd.c\
		ft_strlcat.c\
		ft_substr.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME)
	@echo libft.a was successfully made

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
re: fclean all