#include "tests.h"

void	test_ft_strjoin_normalconditions_true(void)
{
	char	*s1;
	char	*s2;
	char	*s_joined;

	s1 = "para";
	s2 = "quedas";
	s_joined = ft_strjoin(s1, s2);
	printf("\nInputs: s1=%s, s2=%s\n", s1, s2);
	printf("string joined: ft %s\n", s_joined);
	TEST_ASSERT_EQUAL_STRING("paraquedas", s_joined);
	free(s_joined);
}

void	test_ft_strjoin_sizesisgreaterthanintmax_null(void)
{
	char	*s1;
	char	*s2;
	char	*s_joined;

	s1 = ft_calloc(__INT_MAX__ - 1, 1);
	s2 = "que";
	s_joined = ft_strjoin(s1, s2);
	printf("\nInputs: s1=%s, s2=%s\n", s1, s2);
	printf("string joined: ft %s\n", s_joined);
	TEST_ASSERT_NULL(s_joined);
	free(s_joined);
}

void	run_test_ft_strjoin(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strjoin_normalconditions_true);
	RUN_TEST(test_ft_strjoin_sizesisgreaterthanintmax_null);
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
// 	RUN_FT_TEST(00, ft_strjoin)
// 	return (0);
// }