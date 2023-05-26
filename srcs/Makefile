# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 17:25:54 by msakurad          #+#    #+#              #
#    Updated: 2023/05/26 12:01:16 by msakurad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

#ls -xR *.c to sort files for SRC
SRC := \
	ft_atoi.c        ft_bzero.c      ft_calloc.c     ft_isalnum.c  ft_isalpha.c \
	ft_isascii.c     ft_isdigit.c    ft_isprint.c    ft_itoa.c     ft_memchr.c \
	ft_memcmp.c      ft_memcpy.c     ft_memmove.c    ft_memset.c   ft_putchar_fd.c \
	ft_putendl_fd.c  ft_putnbr_fd.c  ft_putstr_fd.c  ft_split.c    ft_strchr.c \
	ft_strdup.c      ft_striteri.c   ft_strjoin.c    ft_strlcat.c  ft_strlcpy.c \
	ft_strlen.c      ft_strmapi.c    ft_strncmp.c    ft_strnstr.c  ft_strrchr.c \
	ft_strtrim.c     ft_substr.c     ft_tolower.c    ft_toupper.c

SRC_BONUS := \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c
# ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ := $(SRC:.c=.o)
OBJ_BONUS := $(SRC_BONUS:.c=.o)

CCFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $^

%.o: %.c
	cc $(CCFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all

.PHONY: all clean fclean re bonus