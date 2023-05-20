#include "tests.h"

void	test_ft_strncmp_ftvslibc_true(void)
{
	char	*str1;
	char	*str2;

	str1 = "abcdefghi";
	str2 = "abcdhfghi";
	printf("\nstr1=\"%s\" str2=\"%s\" n=5\n ft %d vs lib %d\n", str1, str2, ft_strncmp(str1, str2, 5), strncmp(str1, str2, 5));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 8");
	TEST_ASSERT_EQUAL_INT(strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));

}

void	test_ft_strncmp_cmponly3chars_true(void)
{
	char	*str1;
	char	*str2;

	str1 = "1234";
	str2 = "1235";
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp(str1, str2, 3));
}

void	test_ft_strncmp_cmpeverything_true(void)
{
	char	*str1;
	char	*str2;

	str1 = "1234567890";
	str2 = "123967890";
	TEST_ASSERT_EQUAL_INT(-5, ft_strncmp(str1, str2, 15));
}

void	run_test_ft_strncmp(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strncmp_ftvslibc_true);
	RUN_TEST(test_ft_strncmp_cmponly3chars_true);
	RUN_TEST(test_ft_strncmp_cmpeverything_true);
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
// 	RUN_FT_TEST(00, ft_strncmp)
// 	return (0);
// }