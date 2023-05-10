
NAME = libft.a
PATH_SRC = ./src/
PATH_INCLUDE = ./include/
PATH_UNITY = ./unity/src/
PATH_TEST = ./test/
PATH_BUILD_OBJ = ./build/objs
PATH_BUILD_RES = ./build/results
BUILD_PATHS = $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

CCFLAGS = -Wall -Werror -Wextra
COMPILE = cc -c
LINK_LIB = ar -rcs
LINK_EXE = cc
UNITY = ./unity/src/unity.c

LIBFT = libft.h
TARGET = test_all.c
TEST_OUT = a.out

SRC_FILES = ft_isalpha.c ft_isdigit.c
SRCS = $(addprefix $(PATH_SRC),$(SRC_FILES))
TEST_FILES = $(addprefix test_,$(SRC_FILES))
TESTS = $(addprefix $(PATH_TEST),$(TEST_FILES))

all: $(NAME)

$(NAME):
	cc $(CCFLAGS) $(SRCS) $(PATH_TEST)$(TARGET) $(TESTS) $(UNITY) -I $(PATH_INCLUDE) -I $(PATH_UNITY)
	./$(TEST_OUT)

clean:
	rm -rf $(TEST) $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

fclean: clean
	rm -rf $(NAME) $(TEST_OUT)

re: fclean all
