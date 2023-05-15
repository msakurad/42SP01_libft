#include "tests.h"

void	test_ft_strrchr_ftvslibc_true(void)
{
	char	*str;
	int		c;

	str = "camomila";
	c = 'a';
	printf("\nstr=%s, procura '%c'\n ft %p vs lib %p\n", str, c, ft_strrchr(str, c), strrchr(str, c));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_PTR(strrchr(str, c), ft_strrchr(str, c));
}

void	test_ft_strrchr_whenterminator_true(void)
{
	char	*str;
	int		c;

	str = "camomila";
	c = '\0';
	TEST_ASSERT_EQUAL_PTR(strrchr(str, c), ft_strrchr(str, '\0'));
}


void	run_test_ft_strrchr(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strrchr_ftvslibc_true);
	RUN_TEST(test_ft_strrchr_whenterminator_true);
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
// 	RUN_FT_TEST(00, ft_strrchr)
// 	return (0);
// }