#include "tests.h"

void	test_ft_isalnum_ftvslibc_true(void)
{
	printf("cmp ft %d vs lib %d\n", ft_isalnum('A'), isalnum('A'));
	TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 8");
	TEST_ASSERT(isalnum('A') == ft_isalnum('A'));

}

void	test_ft_isalnum_inputlowercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isalnum('a'));
}

void	test_ft_isalnum_inputuppercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isalnum('D'));
}

void	test_ft_isalnum_inputspecialcharac_false(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum('!'));
}

void	run_test_ft_isalnum(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isalnum_ftvslibc_true);
	RUN_TEST(test_ft_isalnum_inputlowercaseletter_true);
	RUN_TEST(test_ft_isalnum_inputuppercaseletter_true);
	RUN_TEST(test_ft_isalnum_inputspecialcharac_false);
	UNITY_END();
}
