#include "tests.h"

void	test_ft_isprint_ftvslibc_true(void)
{
	printf("cmp ft %d vs lib %d\n", ft_isprint('A'), isprint('A'));
	TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 16384");
	TEST_ASSERT(isprint('A') == ft_isprint('A'));

}

void	test_ft_isprint_inputlowercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isprint('a'));
}

void	test_ft_isprint_inputuppercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isprint('D'));
}

void	test_ft_isprint_inputspecialchar_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isprint('!'));
}

void	test_ft_isprint_inputnonprintablechar_false(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isprint('\n'));
}

void	test_ft_isprint_inputnon7bitasciichar_false(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(130));
}

void	run_test_ft_isprint(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isprint_ftvslibc_true);
	RUN_TEST(test_ft_isprint_inputlowercaseletter_true);
	RUN_TEST(test_ft_isprint_inputuppercaseletter_true);
	RUN_TEST(test_ft_isprint_inputspecialchar_true);
	RUN_TEST(test_ft_isprint_inputnonprintablechar_false);
	RUN_TEST(test_ft_isprint_inputnon7bitasciichar_false);
	UNITY_END();
}
