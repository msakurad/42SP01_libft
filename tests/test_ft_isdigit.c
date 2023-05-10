#include "tests.h"

void	test_ft_isdigit_ftvslibc_true(void)
{
	TEST_ASSERT(isdigit('c') == ft_isdigit('c'));
	TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 1024");
	TEST_ASSERT(isdigit('1') == ft_isdigit('1'));
	printf("cmp ft %d vs lib %d\n", ft_isdigit('1'), isdigit('1'));

}

void	test_ft_isdigit_inputnumber_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isdigit('3'));
}

void	test_ft_isdigit_inputothercarac_false(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit('D'));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit('!'));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit('\n'));
}

void	run_test_ft_isdigit(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isdigit_ftvslibc_true);
	RUN_TEST(test_ft_isdigit_inputnumber_true);
	RUN_TEST(test_ft_isdigit_inputothercarac_false);
	UNITY_END();
}
