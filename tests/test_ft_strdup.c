#include "tests.h"

void	test_ft_strdup_ftvslibc_true(void)
{
	char	*src;
	char	*dup_ft;
	char	*dup_lib;

	src = "camomila";
	dup_ft = ft_strdup(src);
	dup_lib = strdup(src);
	printf("\nDup: ft %s, lib %s\n", dup_ft, dup_lib);
	TEST_ASSERT_EQUAL_STRING(dup_lib, dup_ft);
}

void	run_test_ft_strdup(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strdup_ftvslibc_true);
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
// 	RUN_FT_TEST(00, ft_strdup)
// 	return (0);
// }
