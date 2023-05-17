#include "tests.h"

void	test_ft_strtrim_normalconditions_true(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "ab2cabcacateabc";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string joined: ft %s\n", s_trimmed);
	TEST_ASSERT_EQUAL_STRING("abcacate", s_trimmed);
	free(s_trimmed);
}

void	run_test_ft_strtrim(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strtrim_normalconditions_true);
	UNITY_END();
}

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(void)
{
	RUN_FT_TEST(00, ft_strtrim)
	return (0);
}