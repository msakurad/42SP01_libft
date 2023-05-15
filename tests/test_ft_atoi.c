#include "tests.h"

void	test_ft_atoi_ftvslibc_true(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;
	char	*str7;

	str1 = "    \n\r\t\v123";
	str2 = "+123";
	str3 = "    \n-123";
	str4 = "    \n-777 p888";
	str5 = "    \n-77-7p";
	str6 = "2147483647";
	str7 = "-2147483648";
	// printf("\nstr=%s\n lib %d vs ft %d\n", str1, atoi(str1), ft_atoi(str1));
	// printf("\nstr=%s\n lib %d vs ft %d\n", str2, atoi(str2), ft_atoi(str2));
	// printf("\nstr=%s\n lib %d vs ft %d\n", str3, atoi(str3), ft_atoi(str3));
	// printf("\nstr=%s\n lib %d vs ft %d\n", str4, atoi(str4), ft_atoi(str4));
	printf("\nstr=%s\n lib %d vs ft %d\n", str5, atoi(str5), ft_atoi(str5));
	// printf("\nstr=%s\n lib %d vs ft %d\n", str6, atoi(str6), ft_atoi(str6));
	// printf("\nstr=%s\n lib %d vs ft %d\n", str7, atoi(str7), ft_atoi(str7));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 1 x 8");
	TEST_ASSERT_EQUAL_INT(atoi(str1), ft_atoi(str1));
	TEST_ASSERT_EQUAL_INT(atoi(str2), ft_atoi(str2));
	TEST_ASSERT_EQUAL_INT(atoi(str3), ft_atoi(str3));
	TEST_ASSERT_EQUAL_INT(atoi(str4), ft_atoi(str4));
	TEST_ASSERT_EQUAL_INT(atoi(str5), ft_atoi(str5));
	TEST_ASSERT_EQUAL_INT(atoi(str6), ft_atoi(str6));
	TEST_ASSERT_EQUAL_INT(atoi(str7), ft_atoi(str7));

}

void	run_test_ft_atoi(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_atoi_ftvslibc_true);
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
// 	RUN_FT_TEST(00, ft_atoi)
// 	return (0);
// }