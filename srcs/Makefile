# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 17:25:54 by msakurad          #+#    #+#              #
#    Updated: 2023/05/17 19:34:02 by msakurad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

#ls -xR *.c to sort files for SRC
SRC := \
	ft_atoi.c     ft_bzero.c    ft_calloc.c   ft_isalnum.c  ft_isalpha.c \
	ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_memchr.c   ft_memcmp.c \
	ft_memcpy.c   ft_memmove.c  ft_memset.c   ft_strchr.c   ft_strdup.c \
	ft_strjoin.c  ft_strlcat.c  ft_strlcpy.c  ft_strlen.c   ft_strncmp.c \
	ft_strnstr.c  ft_strrchr.c  ft_strtrim.c  ft_substr.c   ft_tolower.c \
	ft_toupper.c

OBJ := $(SRC:.c=.o)

CCFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	cc $(CCFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all