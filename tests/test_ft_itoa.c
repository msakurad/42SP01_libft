#include "tests.h"

void	test_ft_itoa_1234_returns1234(void)
{
	int		n;
	char	*str;

	n = 1;
	str = ft_itoa(n);
	printf("n: %d, str: %s\n", n, str);
	printf("len: %ld\n", ft_strlen(str));
	TEST_ASSERT_EQUAL_STRING("1", str);
	TEST_ASSERT_EQUAL_INT(1, ft_strlen(str));
	free(str);

	n = __INT_MAX__;
	str = ft_itoa(n);
	printf("n: %d, str: %s\n", n, str);
	printf("len: %ld\n", ft_strlen(str));
	TEST_ASSERT_EQUAL_STRING("2147483647", str);
	TEST_ASSERT_EQUAL_INT(10, ft_strlen(str));
	free(str);
}

void	test_ft_itoa_negativenumber_returnsminus1234(void)
{
	int		n;
	char	*str;

	n = -1;
	str = ft_itoa(n);
	printf("n: %d, str: %s\n", n, str);
	printf("len: %ld\n", ft_strlen(str));
	TEST_ASSERT_EQUAL_STRING("-1", str);
	free(str);

	n = INT_MIN;
	str = ft_itoa(n);
	printf("n: %d, str: %s\n", n, str);
	TEST_ASSERT_EQUAL_STRING("-2147483648", str);
	free(str);
}

void	test_ft_itoa_zero_zero(void)
{
	int		n;
	char	*str;

	n = 0;
	str = ft_itoa(n);
	printf("n: %d, str: %s\n", n, str);
	printf("len: %ld\n", ft_strlen(str));
	TEST_ASSERT_EQUAL_STRING("0", str);
	TEST_ASSERT_EQUAL_INT(1, ft_strlen(str));
	free(str);
}

void	run_test_ft_itoa(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_itoa_1234_returns1234);
	RUN_TEST(test_ft_itoa_negativenumber_returnsminus1234);
	RUN_TEST(test_ft_itoa_zero_zero);
	UNITY_END();
}
