#include "tests.h"

// void	test_ft_strnstr_ftvslibc_true(void)
// {
// 	char	*big;
// 	char	*little;

// 	big = "abcdefghi";
// 	little = "def";
// 	printf("\nbig=\"%s\" little=\"%s\" n=3\n ft %d vs lib %d\n", big, little, ft_strnstr(big, little, 3), strnstr(big, little, 3));
// 	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 8");
// 	TEST_ASSERT_EQUAL_INT(strnstr(big, little, 3), ft_strnstr(big, little, 3));

// }

void	test_ft_strnstr_littlefound_returnsfirstocurrence(void)
{
	char	*big;
	char	*little;

	big = "abcdefghi";
	little = "def";
	printf("\nbig=\"%s\" little=\"%s\" n=6\n", big, little);
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 8");
	TEST_ASSERT_EQUAL_STRING(&big[3], ft_strnstr(big, little, 6));

}

void	test_ft_strnstr_littledifferentbutfound_returnsfirstocurrence(void)
{
	char	*big;
	char	*little;

	big = "abcdefghi";
	little = "defx";
	printf("\nbig=\"%s\" little=\"%s\" n=3\n", big, little);
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 8");
	TEST_ASSERT_EQUAL_STRING(&big[3], ft_strnstr(big, little, 3));

}

void	test_ft_strnstr_littleempty_returnsbig(void)
{
	char	*big;
	char	*little;

	big = "abcdefghi";
	little = "";
	TEST_ASSERT_EQUAL_STRING(big, ft_strnstr(big, little, 3));
}

void	test_ft_strnstr_littleistotallydifferentnotfound_returnsnull(void)
{
	char	*big;
	char	*little;

	big = "abcdefghi";
	little = "klm";
	TEST_ASSERT_EQUAL_STRING(NULL, ft_strnstr(big, little, 3));
}

void	test_ft_strnstr_littleisinbigbutlenisshort_returnsnull(void)
{
	char	*big;
	char	*little;

	big = "abcdefghi";
	little = "def";
	TEST_ASSERT_EQUAL_STRING(NULL, ft_strnstr(big, little, 3));
}

void	test_ft_strnstr_littlenotfound_onechardifferent_returnsnull(void)
{
	char	*big;
	char	*little;

	big = "abcdefghi";
	little = "defx";
	TEST_ASSERT_EQUAL_STRING(NULL, ft_strnstr(big, little, 4));
}

void	test_ft_strnstr_nisbiggerthanbigandlittle_returnsnull(void)
{
	char	*big;
	char	*little;

	big = "abcdefghi";
	little = "defx";
	TEST_ASSERT_EQUAL_STRING(NULL, ft_strnstr(big, little, 30));
}

void	run_test_ft_strnstr(void)
{
	UNITY_BEGIN();
	//RUN_TEST(test_ft_strnstr_ftvslibc_true);
	RUN_TEST(test_ft_strnstr_littlefound_returnsfirstocurrence);
	RUN_TEST(test_ft_strnstr_littledifferentbutfound_returnsfirstocurrence);
	RUN_TEST(test_ft_strnstr_littleistotallydifferentnotfound_returnsnull);
	RUN_TEST(test_ft_strnstr_littlenotfound_onechardifferent_returnsnull);
	RUN_TEST(test_ft_strnstr_littleempty_returnsbig);
	RUN_TEST(test_ft_strnstr_nisbiggerthanbigandlittle_returnsnull);
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
	RUN_FT_TEST(00, ft_strnstr)
	return (0);
}