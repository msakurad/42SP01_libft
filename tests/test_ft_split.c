#include "tests.h"

void	test_ft_split_delimiterisspecialchar_3words(void)
{
	char	*s;
	char	set;
	char	**split_s;

	s = "?abcab ?? caca?teabcabc?";
	set = '?';
	split_s = (char **)malloc(sizeof(char *) * 200);
	split_s = ft_split(s, set);
	printf("\nInputs: s=\"%s\", set='%c'\n", s, set);
	while (*split_s)
	{
		printf("string split: \"%s\"\n", *split_s);
		// TEST_ASSERT_EQUAL_STRING("te", split_s);
		free(*split_s);
		split_s++;
	}
}

void	test_ft_split_onewordwithdelimeterintheend_oneword(void)
{
	char	*s;
	char	set;
	char	**split_s;

	s = "abacate ";
	set = ' ';
	split_s = (char **)malloc(sizeof(char *) * 200);
	split_s = ft_split(s, set);
	printf("\nInputs: s=\"%s\", set='%c'\n", s, set);
	while (*split_s)
	{
		printf("string split: \"%s\"\n", *split_s);
		// TEST_ASSERT_EQUAL_STRING("te", split_s);
		free(*split_s);
		split_s++;
	}
}

void	test_ft_split_onewordwithdelimetersinthebeginandend_oneword(void)
{
	char	*s;
	char	set;
	char	**split_s;
	int		count;

	s = " abacate ";
	set = ' ';
	split_s = (char **)malloc(sizeof(char *) * 200);
	split_s = ft_split(s, set);
	printf("\nInputs: s=\"%s\", set='%c'\n", s, set);
	count = 0;
	while (split_s[count])
	{
		printf("string split: \"%s\"\n", split_s[count]);
		free(*split_s);
		count++;
	}
	TEST_ASSERT_EQUAL_STRING(NULL, split_s[count]);
}

void	run_test_ft_split(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_split_delimiterisspecialchar_3words);
	RUN_TEST(test_ft_split_onewordwithdelimeterintheend_oneword);
	RUN_TEST(test_ft_split_onewordwithdelimetersinthebeginandend_oneword);
	UNITY_END();
}
