#include "tests.h"

void	test_ft_tolower_ftvslibc_true(void)
{
	printf("cmp ft %d vs lib %d\n", ft_tolower('C'), tolower('C'));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT(tolower('C') == ft_tolower('C'));
}

void	test_ft_tolower_inputlowercaseletter_true(void)
{
	TEST_ASSERT_EQUAL_INT(97, ft_tolower('a'));
}

void	test_ft_tolower_inputuppercaseletter_true(void)
{
	TEST_ASSERT_EQUAL_INT(100, ft_tolower('D'));
}

void	test_ft_tolower_inputspecialchar_true(void)
{
	TEST_ASSERT_EQUAL_CHAR('!', ft_tolower('!'));
}

void	test_ft_tolower_inputnonprintablechar_true(void)
{
	TEST_ASSERT_EQUAL_CHAR('\n', ft_tolower('\n'));
}

void	test_ft_tolower_inputnon7bitasciichar_false(void)
{
	TEST_ASSERT_EQUAL_INT(130, ft_tolower(130));
}

void	run_test_ft_tolower(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_tolower_ftvslibc_true);
	RUN_TEST(test_ft_tolower_inputlowercaseletter_true);
	RUN_TEST(test_ft_tolower_inputuppercaseletter_true);
	RUN_TEST(test_ft_tolower_inputspecialchar_true);
	RUN_TEST(test_ft_tolower_inputnonprintablechar_true);
	RUN_TEST(test_ft_tolower_inputnon7bitasciichar_false);
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
// 	RUN_FT_TEST(00, ft_tolower)
// 	return (0);
// }