#include "tests.h"

void	test_ft_strtrim_trimbothends_trimmeds1(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "abcabcacateabcabc";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	TEST_ASSERT_EQUAL_STRING("te", s_trimmed);
	free(s_trimmed);
}

void	test_ft_strtrim_trimonlyendofs1_trimmeds1(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "AbCabcacatebccabc";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	TEST_ASSERT_EQUAL_STRING("AbCabcacate", s_trimmed);
	free(s_trimmed);
}

void	test_ft_strtrim_trimonlyiniofs1_trimmeds1(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "abcbbbabcacateabC";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	TEST_ASSERT_EQUAL_STRING("teabC", s_trimmed);
	free(s_trimmed);
}

void	test_ft_strtrim_alltrimmed_emptystring(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "abcbbbabcacaab";
	set = "abc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	//TEST_IGNORE_MESSAGE("Test with \\0, unsure of the result");
	TEST_ASSERT_EQUAL_STRING("", s_trimmed);
	free(s_trimmed);
}

void	test_ft_strtrim_setwithterminator_resultsunknown(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "a\0bcbbbabcacateabC";
	set = "a\0bc";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	TEST_IGNORE_MESSAGE("Test with \\0, unsure of the result");
	TEST_ASSERT_EQUAL_STRING("teabC", s_trimmed);
	free(s_trimmed);
}

void	test_ft_strtrim_trimoneleftbutnoright(void)
{
	char	*s1;
	char	*set;
	char	*s_trimmed;

	s1 = "!abacat!e";
	set = "!xv";
	s_trimmed = ft_strtrim(s1, set);
	printf("\nInputs: s1=%s, set=%s\n", s1, set);
	printf("string trimmed: ft %s\n", s_trimmed);
	// TEST_IGNORE_MESSAGE("Test with \\0, unsure of the result");
	TEST_ASSERT_EQUAL_STRING("abacat!e", s_trimmed);
	free(s_trimmed);
}

void	run_test_ft_strtrim(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strtrim_trimbothends_trimmeds1);
	RUN_TEST(test_ft_strtrim_trimonlyendofs1_trimmeds1);
	RUN_TEST(test_ft_strtrim_trimonlyiniofs1_trimmeds1);
	RUN_TEST(test_ft_strtrim_alltrimmed_emptystring);
	RUN_TEST(test_ft_strtrim_setwithterminator_resultsunknown);
	RUN_TEST(test_ft_strtrim_trimoneleftbutnoright);
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
// 	RUN_FT_TEST(00, ft_strtrim)
// 	return (0);
// }