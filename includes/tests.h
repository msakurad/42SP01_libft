
#ifndef TESTS_H
# define TESTS_H

# include "libft.h"
# include "unity.h"
# include "unity_internals.h"
# include <stdio.h>
# include <string.h>
//# include <bsd/strings.h>
# include <strings.h>
# include <ctype.h>

//# define CREATE_FT_TEST(ftname) void	run_test_##ftname(void);
//CREATE_FT_TEST(isalpha)

#define RUN_FT_TEST(id, ftname) \
	printf("\n----------------\n\n"); \
	printf("\n\033[1;36mTESTE N%s: test_%s\033[0m\n\n", #id, #ftname); \
	run_test_##ftname();

// PART 1
void	run_test_ft_isalpha(void);
void	run_test_ft_isdigit(void);
void	run_test_ft_isalnum(void);
void	run_test_ft_isascii(void);
void	run_test_ft_isprint(void);
void	run_test_ft_strlen(void);
void	run_test_ft_memset(void);
void	run_test_ft_bzero(void);
void	run_test_ft_memcpy(void);
void	run_test_ft_memmove(void);
void	run_test_ft_strlcpy(void);
void	run_test_ft_strlcat(void);
void	run_test_ft_toupper(void);
void	run_test_ft_tolower(void);
void	run_test_ft_strchr(void);
void	run_test_ft_strrchr(void);
void	run_test_ft_strncmp(void);
void	run_test_ft_memchr(void);
void	run_test_ft_memcmp(void);

// PART 2

// BONUS

// enum test_list
// {

// };



#endif

