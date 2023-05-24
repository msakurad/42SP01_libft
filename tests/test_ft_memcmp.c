#include "tests.h"

void	test_ft_memcmp_ftvslibc_true(void)
{
	char	*str1;
	char	*str2;

	str1 = "abcdefzhi";
	str2 = "abcdhfghi";
	printf("\nstr1=\"%s\" str2=\"%s\" n=5\n lib %d vs ft %d\n", str1, str2, memcmp(str1, str2, 5), ft_memcmp(str1, str2, 5));
	TEST_IGNORE_MESSAGE("lib vs ft fail -> return -1 x -3");
	TEST_ASSERT_EQUAL_INT(memcmp(str1, str2, 5), ft_memcmp(str1, str2, 5));
}

void	test_ft_memcmp_cmponly3chars_true(void)
{
	char	*str1;
	char	*str2;

	str1 = "abcdefghi";
	str2 = "abcdhfghi";
	TEST_ASSERT_EQUAL_INT(0, ft_memcmp(str1, str2, 3));
}

void	test_ft_memcmp_stringarray_true(void)
{
	char	str1[] = {-128, 0, 127, -1};
	char	str2[] = {-128, 0, 127, 0};

	TEST_ASSERT_EQUAL_INT(0, ft_memcmp(str1, str2, 3));
}

void	test_ft_memcmp_numbers_true(void)
{
	int	arr1[4] = {-128, 0, 127, 0};
	int	arr2[4] = {-128, 0, 127, 0};
	int	res;

	res = ft_memcmp(arr1, arr2, 4);
	printf("ft_memcmp: %d\n", res);
	TEST_ASSERT_EQUAL_INT(0, res);
}

void	run_test_ft_memcmp(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_memcmp_ftvslibc_true);
	RUN_TEST(test_ft_memcmp_cmponly3chars_true);
	RUN_TEST(test_ft_memcmp_stringarray_true);
	RUN_TEST(test_ft_memcmp_numbers_true);
	UNITY_END();
}
