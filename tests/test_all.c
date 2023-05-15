#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(void)
{
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
	return (0);
}
