#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(void)
{
	RUN_FT_TEST(ft_isalpha)
	RUN_FT_TEST(ft_isdigit)
	RUN_FT_TEST(ft_isprint)
	RUN_FT_TEST(ft_isascii)
	RUN_FT_TEST(ft_isprint)
	RUN_FT_TEST(ft_strlen)
	//RUN_FT_TEST(ft_memset)
	return (0);
}
