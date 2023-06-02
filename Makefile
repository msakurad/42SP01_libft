
NAME := libft.a
PATH_SRC := ./srcs/
PATH_INCLUDE := ./includes/
PATH_UNITY := ./Unity/src/
PATH_TEST := ./tests/
PATH_BUILD_OBJ := ./build/objs
PATH_BUILD_RES := ./build/results
BUILD_PATHS := $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)
INCLUDE_PATHS := -I $(PATH_INCLUDE) -I $(PATH_UNITY) -I $(PATH_SRC) -I $(PATH_TEST)

CCFLAGS := -Wall -Werror -Wextra
COMPILE := cc -c
LINK_LIB := ar -rcs
LINK_EXE := cc
UNITY := ./Unity/src/unity.c

LIBFT := libft.h
TARGET := test_all.c
TEST_OUT := a.out

SRC_FILES := *.c

SRC_FILES_PART1 := \
	ft_atoi.c        ft_bzero.c      ft_calloc.c     ft_isalnum.c  ft_isalpha.c \
	ft_isascii.c     ft_isdigit.c    ft_isprint.c    ft_memchr.c \
	ft_memcmp.c      ft_memcpy.c     ft_memmove.c    ft_memset.c \
	ft_strchr.c      ft_strdup.c     ft_strjoin.c    ft_strlcat.c  ft_strlcpy.c \
	ft_strlen.c      ft_strncmp.c    ft_strnstr.c    ft_strrchr.c \
	ft_tolower.c     ft_toupper.c

SRC_FILES_PART2 := \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c  ft_putnbr_fd.c  ft_putstr_fd.c  ft_split.c \
	ft_striteri.c   ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c     ft_substr.c

SRCS = $(addprefix $(PATH_SRC),$(SRC_FILES))
SRCS_PART1 = $(addprefix $(PATH_SRC),$(SRC_FILES_PART1))
SRCS_PART2 = $(addprefix $(PATH_SRC),$(SRC_FILES_PART2))
TEST_FILES = $(addprefix test_,$(SRC_FILES))
TEST_FILES_PART1 = $(addprefix test_,$(SRC_FILES_PART1)) test_all.c
TEST_FILES_PART2 = $(addprefix test_,$(SRC_FILES_PART2))
TESTS = $(addprefix $(PATH_TEST),$(TEST_FILES))

TESTS_AUX = ./tests/testaux*.c

all: $(NAME)

$(NAME):
	cc $(CCFLAGS) $(SRCS) $(TESTS) $(TESTS_AUX) $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT)

ft_%.c:
	cc $(CCFLAGS) $(SRCS) $(PATH_TEST)test_$@ $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT)

p1:
	cc $(CCFLAGS) $(SRCS) $(TESTS) $(TESTS_AUX) $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT) $@

p2:
	cc $(CCFLAGS) $(SRCS) $(TESTS) $(TESTS_AUX) $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT) $@

bonus:
	cc $(CCFLAGS) $(SRCS) $(TESTS) $(TESTS_AUX) $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT) $@

+%:
	cc $(CCFLAGS) $(SRCS) $(TESTS) $(TESTS_AUX) $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT) $@

clean:
	rm -rf $(TEST) $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

fclean: clean
	rm -rf $(NAME) $(TEST_OUT)

re: fclean all
