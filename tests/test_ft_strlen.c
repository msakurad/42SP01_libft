#include "tests.h"

void	test_ft_strlen_ftvslibc_true(void)
{
	printf("cmp \"ABCDE\" ft %zu vs lib %lu\n", ft_strlen("ABCDE"), strlen("ABCDE"));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT(strlen("ABCDE") == ft_strlen("ABCDE"));
	printf("cmp \"\" ft %zu vs lib %lu\n", ft_strlen(""), strlen(""));
	TEST_ASSERT(strlen("") == ft_strlen(""));
}

void	test_ft_strlen_inputnullchar_0(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_strlen(""));
}

void	test_ft_strlen_stringhelloworld_10(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(10, ft_strlen("Hello World"));
}

void	test_ft_strlen_inputspecialchar_5(void)
{
	TEST_ASSERT_EQUAL_INT(5, ft_strlen("!@#$)"));
}

void	test_ft_strlen_inputnonprintablechar_3(void)
{
	TEST_ASSERT_EQUAL_INT(3, ft_strlen("\v\n\t"));
}

void	run_test_ft_strlen(void)
{

	UNITY_BEGIN();
	RUN_TEST(test_ft_strlen_ftvslibc_true);
	RUN_TEST(test_ft_strlen_inputnullchar_0);
	RUN_TEST(test_ft_strlen_stringhelloworld_10);
	RUN_TEST(test_ft_strlen_inputspecialchar_5);
	RUN_TEST(test_ft_strlen_inputnonprintablechar_3);
	UNITY_END();
}
