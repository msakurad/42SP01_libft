#include "tests.h"

void	test_ft_strtrim_trimbothends_trimmeds1(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "abcabcacateabc";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	TEST_ASSERT_EQUAL_STRING("abcacate", s_trimmed);
	free(s_trimmed);
}

void	test_ft_strtrim_trimonlyendofs1_trimmeds1(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "abCabcacateabc";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	TEST_ASSERT_EQUAL_STRING("abCabcacate", s_trimmed);
	free(s_trimmed);
}

void	test_ft_strtrim_trimonlyiniofs1_trimmeds1(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "abcabcacateabC";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	TEST_ASSERT_EQUAL_STRING("abcacateabC", s_trimmed);
	free(s_trimmed);
}

void	run_test_ft_strtrim(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strtrim_trimbothends_trimmeds1);
	RUN_TEST(test_ft_strtrim_trimonlyendofs1_trimmeds1);
	RUN_TEST(test_ft_strtrim_trimonlyiniofs1_trimmeds1);
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