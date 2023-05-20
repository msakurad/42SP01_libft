#include "tests.h"

void	test_ft_calloc_ftvslibc_normalconditions_true(void)
{
	char *str;

	str = (char *)ft_calloc(4, sizeof(char));
	printf("str %s\n", str);
	TEST_IGNORE_MESSAGE("testes não feitos");
}

void	run_test_ft_calloc(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_calloc_ftvslibc_normalconditions_true);
	UNITY_END();
}

// void	setUp(void)
// {
// }

// void	tearDown(void)
// {
// }

// int	main(void)
// {
// 	RUN_FT_TEST(ft_calloc)
// 	return (0);
// }
