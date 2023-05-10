#include "tests.h"

void	test_ft_memset_ftvslibc_true(void)
{
	printf("cmp ft %d vs lib %d\n", ft_memset('A'), memset('A'));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT(memset('A') == ft_memset('A'));

}

void	test_ft_memset_inputlowercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_memset('a'));
}

void	test_ft_memset_inputuppercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_memset('D'));
}


void	run_test_ft_memset(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_memset_ftvslibc_true);
	RUN_TEST(test_ft_memset_inputlowercaseletter_true);
	RUN_TEST(test_ft_memset_inputuppercaseletter_true);
	UNITY_END();
}
