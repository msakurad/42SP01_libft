#include "tests.h"

void	test_ft_toupper_ftvslibc_true(void)
{
	printf("cmp ft %d vs lib %d\n", ft_toupper('b'), toupper('b'));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT(toupper('b') == ft_toupper('b'));
}

void	test_ft_toupper_inputlowercaseletter_true(void)
{
	TEST_ASSERT_EQUAL_INT(65, ft_toupper('a'));
}

void	test_ft_toupper_inputuppercaseletter_true(void)
{
	TEST_ASSERT_EQUAL_INT(68, ft_toupper('D'));
}

void	test_ft_toupper_inputspecialchar_true(void)
{
	TEST_ASSERT_EQUAL_CHAR('!', ft_toupper('!'));
}

void	test_ft_toupper_inputnonprintablechar_true(void)
{
	TEST_ASSERT_EQUAL_CHAR('\n', ft_toupper('\n'));
}

void	test_ft_toupper_inputnon7bitasciichar_false(void)
{
	TEST_ASSERT_EQUAL_INT(130, ft_toupper(130));
}

void	run_test_ft_toupper(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_toupper_ftvslibc_true);
	RUN_TEST(test_ft_toupper_inputlowercaseletter_true);
	RUN_TEST(test_ft_toupper_inputuppercaseletter_true);
	RUN_TEST(test_ft_toupper_inputspecialchar_true);
	RUN_TEST(test_ft_toupper_inputnonprintablechar_true);
	RUN_TEST(test_ft_toupper_inputnon7bitasciichar_false);
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
// 	RUN_FT_TEST(00, ft_toupper)
// 	return (0);
// }