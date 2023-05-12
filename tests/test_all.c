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
	return (0);
}
