
NAME = libft.a
PATH_SRC = ./srcs/
PATH_INCLUDE = ./includes/
PATH_UNITY = ./Unity/src/
PATH_TEST = ./tests/
PATH_BUILD_OBJ = ./build/objs
PATH_BUILD_RES = ./build/results
BUILD_PATHS = $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)
INCLUDE_PATHS = -I $(PATH_INCLUDE) -I $(PATH_UNITY) -I $(PATH_SRC)

CCFLAGS = -Wall -Werror -Wextra
COMPILE = cc -c
LINK_LIB = ar -rcs
LINK_EXE = cc
UNITY = ./Unity/src/unity.c

LIBFT = libft.h
TARGET = test_all.c
TEST_OUT = a.out

SRC_FILES_PART1 = *.c
# ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c

SRCS = $(addprefix $(PATH_SRC),$(SRC_FILES_PART1))
TEST_FILES = $(addprefix test_,$(SRC_FILES_PART1))
TESTS = $(addprefix $(PATH_TEST),$(TEST_FILES))

#BONUS_FILES
#BONUS
#

all: $(NAME)

$(NAME):
	cc $(CCFLAGS) $(SRCS) $(TESTS) $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT)

ft_%.c:
	cc $(CCFLAGS) $(SRCS) $(PATH_TEST)test_$@ $(UNITY) $(INCLUDE_PATHS)
	./$(TEST_OUT)

clean:
	rm -rf $(TEST) $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

fclean: clean
	rm -rf $(NAME) $(TEST_OUT)

re: fclean all
