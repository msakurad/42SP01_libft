
#ifndef TESTS_H
# define TESTS_H

# include "libft.h"
# include "unity.h"
# include "unity_internals.h"
# include <stdio.h>
# include <string.h>
# include <ctype.h>

//# define CREATE_FT_TEST(ftname) void	run_test_##ftname(void);
//CREATE_FT_TEST(isalpha)

#define RUN_FT_TEST(ftname) \
	printf("\n----------------\n\n"); \
	printf("\ntest_%s\n\n", #ftname); \
	run_test_##ftname();


// PART 1

void	run_test_ft_isalpha(void);
void	run_test_ft_isdigit(void);
void	run_test_ft_isalnum(void);
void	run_test_ft_isascii(void);
void	run_test_ft_isprint(void);
void	run_test_ft_strlen(void);
void	run_test_ft_memset(void);

// enum test_list
// {

// };



#endif

