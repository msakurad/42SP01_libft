#include "tests.h"

void	test_ft_bzero_ftvslibc_normalconditions_true(void)
{
	char str_ft[9];
	char str_lib[9];

	strcpy(str_ft, "Exemplos");
	strcpy(str_lib, "Exemplos");
	printf("cmp ft %s vs lib %s\n", str_ft, str_lib);

	ft_bzero(str_ft, 4*sizeof(char));
	bzero(str_lib, 4*sizeof(char));
	printf("cmp ft %s vs lib %s\n", str_ft, str_lib);
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_bzero_ftvslibc_otherexample_true(void)
{
	char str_sys[50] = "Aticleworld is a programming Blog.";
	char str_ft[50] = "Aticleworld is a programming Blog.";
	bzero(str_sys + 11, 6);
	ft_bzero(str_ft + 11, 6);
	TEST_ASSERT_EQUAL_STRING(str_sys, str_ft);
}

void	test_ft_bzero_ftvslibc_intarrayc3_true(void)
{
	int	arr_ft[10] = {3, 3, 5, 7};
	int	arr_lib[10] = {3, 3, 5, 7};

	printf("\nTeste com array tipo int\n");
	printf("\nAntes arr[0] ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\nAntes arr[1] ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\nAntes arr[2] ft %d, lib %d", arr_ft[2], arr_lib[2]);
	printf("\nAntes arr[3] ft %d, lib %d\n", arr_ft[3], arr_lib[3]);
	ft_bzero(arr_ft, 3*sizeof(int));
	bzero(arr_lib, 3*sizeof(int));
	printf("\nDepois arr[0] ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\nDepois arr[1] ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\nDepois arr[2] ft %d, lib %d", arr_ft[2], arr_lib[2]);
	printf("\nDepois arr[3] ft %d, lib %d\n", arr_ft[3], arr_lib[3]);
}

void	run_test_ft_bzero(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_bzero_ftvslibc_normalconditions_true);
	RUN_TEST(test_ft_bzero_ftvslibc_otherexample_true);
	RUN_TEST(test_ft_bzero_ftvslibc_intarrayc3_true);
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
// 	RUN_FT_TEST(ft_bzero)
// 	return (0);
// }
