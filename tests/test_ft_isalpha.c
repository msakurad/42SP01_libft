#include "tests.h"

void	test_ft_isalpha_ftvslibc_true(void)
{
	printf("cmp ft %d vs lib %d\n", ft_isalpha('A'), isalpha('A'));
	TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT(isalpha('c') == ft_isalpha('c'));
	//TEST_ASSERT(isalpha('1') == ft_isalpha('1'));

}

void	test_ft_isalpha_inputlowercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isalpha('a'));
}

void	test_ft_isalpha_inputuppercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isalpha('D'));
}

void	test_ft_isalpha_inputspecialcharac_false(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha('!'));
}

void	run_test_ft_isalpha(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isalpha_ftvslibc_true);
	RUN_TEST(test_ft_isalpha_inputlowercaseletter_true);
	RUN_TEST(test_ft_isalpha_inputuppercaseletter_true);
	RUN_TEST(test_ft_isalpha_inputspecialcharac_false);
	UNITY_END();
}
