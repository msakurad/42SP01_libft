#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(void)
{
	// Part 1	
	RUN_FT_TEST(01, ft_isalpha)
	RUN_FT_TEST(02, ft_isdigit)
	RUN_FT_TEST(03, ft_isprint)
	RUN_FT_TEST(04, ft_isascii)
	RUN_FT_TEST(05, ft_isprint)
	RUN_FT_TEST(06, ft_strlen)
	RUN_FT_TEST(07, ft_memset)
	RUN_FT_TEST(08, ft_bzero)
	RUN_FT_TEST(09, ft_memcpy)
	RUN_FT_TEST(10, ft_memmove)
	// RUN_FT_TEST(11, ft_strlcpy)
	// RUN_FT_TEST(12, ft_strlcat)
	RUN_FT_TEST(13, ft_toupper)
	RUN_FT_TEST(14, ft_tolower)
	RUN_FT_TEST(15, ft_strchr)
	RUN_FT_TEST(16, ft_strrchr)
	RUN_FT_TEST(17, ft_strncmp)
	RUN_FT_TEST(18, ft_memchr)
	RUN_FT_TEST(19, ft_memcmp)
	RUN_FT_TEST(20, ft_strnstr)
	RUN_FT_TEST(21, ft_atoi)
	RUN_FT_TEST(22, ft_calloc)
	
	// Part 2
	RUN_FT_TEST(23, ft_substr)
	RUN_FT_TEST(24, ft_strjoin)
	RUN_FT_TEST(25, ft_strtrim)
	return (0);
}
