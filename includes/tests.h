
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
# include <limits.h>

//# define CREATE_FT_TEST(ftname) void	run_test_##ftname(void);
//CREATE_FT_TEST(isalpha)

#define RUN_FT_TEST(id, ftname) \
	printf("\n----------------\n\n"); \
	printf("\n\033[1;36mTESTE N%s: %s\033[0m\n\n", #id, #ftname); \
	run_##ftname();

void	run_test_ft(int enum_test);

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
void	run_test_ft_strnstr(void);
void	run_test_ft_atoi(void);
void	run_test_ft_calloc(void);
void	run_test_ft_strdup(void);

// PART 2
void	run_test_ft_substr(void);
void	run_test_ft_strjoin(void);
void	run_test_ft_strtrim(void);
void	run_test_ft_split(void);
void	run_test_ft_itoa(void);



void	run_test_ft_putnbr_fd(void);


// BONUS

enum Tests
{
	// Part 1
	Tests_ft_isalpha = 1,
	Tests_ft_isdigit,
	Tests_ft_isalnum,
	Tests_ft_isascii,
	Tests_ft_isprint,
	Tests_ft_strlen,
	Tests_ft_memset,
	Tests_ft_bzero,
	Tests_ft_memcpy,
	Tests_ft_memmove,
	Tests_ft_strlcpy,
	Tests_ft_strlcat,
	Tests_ft_toupper,
	Tests_ft_tolower,
	Tests_ft_strchr,
	Tests_ft_strrchr,
	Tests_ft_strncmp,
	Tests_ft_memchr,
	Tests_ft_memcmp,
	Tests_ft_strnstr,
	Tests_ft_atoi,
	Tests_ft_calloc,
	Tests_ft_strdup,
	// Part 2
	Tests_ft_substr,
	Tests_ft_strjoin,
	Tests_ft_strtrim,
	Tests_ft_split,
	Tests_ft_itoa,
	Tests_ft_strmapi,
	Tests_ft_striteri,
	Tests_ft_putchar_fd,
	Tests_ft_putstr_fd,
	Tests_ft_putendl_fd,
	Tests_ft_putnbr_fd
};

#endif

