#include "tests.h"

void	test_ft_isascii_ftvslibc_true(void)
{
	printf("cmp ft %d vs lib %d\n", ft_isascii('A'), isascii('A'));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT(isascii('A') == ft_isascii('A'));

}

void	test_ft_isascii_inputlowercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isascii('a'));
}

void	test_ft_isascii_inputuppercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isascii('D'));
}

void	test_ft_isascii_inputspecialchar_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isascii('!'));
}

void	test_ft_isascii_inputnonprintablechar_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isascii('\n'));
}

void	test_ft_isascii_inputnon7bitasciichar_false(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isascii(130));
}

void	run_test_ft_isascii(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isascii_ftvslibc_true);
	RUN_TEST(test_ft_isascii_inputlowercaseletter_true);
	RUN_TEST(test_ft_isascii_inputuppercaseletter_true);
	RUN_TEST(test_ft_isascii_inputspecialchar_true);
	RUN_TEST(test_ft_isascii_inputnonprintablechar_true);
	RUN_TEST(test_ft_isascii_inputnon7bitasciichar_false);
	UNITY_END();
}
