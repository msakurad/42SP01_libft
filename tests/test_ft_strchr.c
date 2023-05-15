#include "tests.h"

void	test_ft_strchr_ftvslibc_true(void)
{
	char	*str;
	int		c;

	str = "camomila";
	c = 'a';
	printf("\nstr=%s, procura '%c'\n ft %p vs lib %p\n", str, c, ft_strchr(str, c), strchr(str, c));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_PTR(strchr(str, c), ft_strchr(str, c));
}

void	test_ft_strchr_whenterminator_true(void)
{
	char	*str;
	int		c;

	str = "camomila";
	c = '\0';
	TEST_ASSERT_EQUAL_PTR(strchr(str, c), ft_strchr(str, '\0'));
}


void	run_test_ft_strchr(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strchr_ftvslibc_true);
	RUN_TEST(test_ft_strchr_whenterminator_true);
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
// 	RUN_FT_TEST(00, ft_strchr)
// 	return (0);
// }