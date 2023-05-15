// #include "tests.h"

// void	test_ft_strlcat_ftvslibc_true(void)
// {
// 	char	dest_ft[10];
// 	char	dest_lib[10];
// 	int		size_ft;
// 	int		size_lib;

// 	size_ft = ft_strlcat(dest_ft, "abcde", 3);
// 	size_lib = strlcat(dest_lib, "abcde", 3);
// 	printf("\nReturn value: ft %d, lib %d\n", size_ft, size_lib);
// 	TEST_ASSERT_EQUAL_INT(size_lib, size_ft);
// 	printf("dest string: ft %s, lib %s\n", dest_ft, dest_lib);
// 	TEST_ASSERT_EQUAL_STRING(dest_lib, dest_ft);
// }

// void	test_ft_strlcat_stringwithsizegreaterthansrc_true(void)
// {
// 	char	dest[30];
// 	int		size_src;

// 	size_src = ft_strlcat(dest, "abcde", 7);
// 	printf("\nReturn value: %d\n", size_src);
// 	TEST_ASSERT_EQUAL_INT(5, size_src);
// 	printf("dest string: ft %s\n", dest);
// 	TEST_ASSERT_EQUAL_STRING("abcde", dest);
// }

// void	run_test_ft_strlcat(void)
// {
// 	UNITY_BEGIN();
// 	RUN_TEST(test_ft_strlcat_ftvslibc_true);
// 	RUN_TEST(test_ft_strlcat_stringwithsizegreaterthansrc_true);
// 	UNITY_END();
// }

// // void	setUp(void)
// // {
// // }

// // void	tearDown(void)
// // {
// // }

// // int	main(void)
// // {
// // 	RUN_FT_TEST(00, ft_strlcat)
// // 	return (0);
// // }
