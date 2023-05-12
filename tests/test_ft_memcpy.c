#include "tests.h"

void	test_ft_memcpy_ftvslibc_normalconditions_true(void)
{
	char str_ft[9];
	char str_lib[9];

	strcpy(str_ft, "Exemplos");
	strcpy(str_lib, "Exemplos");
	printf("Antes dest ft %s vs lib %s\n", str_ft, str_lib);
	printf("O src é cranberry, n = 4\n");

	ft_memcpy(str_ft, "cranberry", 4*sizeof(char));
	memcpy(str_lib, "cranberry", 4*sizeof(char));
	printf("\nDepois cmp ft %s vs lib %s\n\n", str_ft, str_lib);
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memcpy_ftvslibc_overlappingsrcisgreaterthandest_undefined(void)
{
	char str_lib[50] = "palha";
	char str_ft[50] = "palha";

	printf("\nAntes dest ft %s vs lib %s\n", str_ft, str_lib);
	printf("O src é batata, n = 6, cópia começando no dest[2]\n");
	memcpy(str_lib + 0, "batata",6);
	ft_memcpy(str_ft + 0, "batata",6);
	printf("\nDepois cmp ft %s vs lib %s\n\n", str_ft, str_lib);
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memcpy_ftvslibc_overlappingnbytesisgreaterthandest_undefined(void)
{
	char str_lib[50] = "palha";
	char str_ft[50] = "palha";

	printf("\nAntes dest ft %s vs lib %s\n", str_ft, str_lib);
	printf("O src é bat, n = 7\n");
	memcpy(str_lib + 3, "bat",7);
	ft_memcpy(str_ft + 3, "bat",7);
	printf("\nDepois cmp ft %s vs lib %s\n\n", str_ft, str_lib);
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memcpy_ftvslibc_intarraynormalconditions_true(void)
{
	int	arr_ft[5] = {3, 3, 5, 7, 1};
	int	arr_lib[5] = {3, 3, 5, 7, 1};
	int	src[3] = {1, 2, 3};

	printf("\nTeste com array tipo int\n");
	printf("\nsrc = {1,2,3} e n = 3\n");
	printf("\nAntes arr[0] ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\nAntes arr[1] ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\nAntes arr[2] ft %d, lib %d", arr_ft[2], arr_lib[2]);
	printf("\nAntes arr[3] ft %d, lib %d", arr_ft[3], arr_lib[3]);
	printf("\nAntes arr[4] ft %d, lib %d\n", arr_ft[4], arr_lib[4]);
	ft_memcpy(arr_ft, src, 3*sizeof(int));
	memcpy(arr_lib, src, 3*sizeof(int));
	printf("\nDepois arr[0] ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\nDepois arr[1] ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\nDepois arr[2] ft %d, lib %d", arr_ft[2], arr_lib[2]);
	printf("\nDepois arr[3] ft %d, lib %d", arr_ft[3], arr_lib[3]);
	printf("\nDepois arr[4] ft %d, lib %d\n\n", arr_ft[4], arr_lib[4]);
}

void	test_ft_memcpy_ftvslibc_intarrayoverlappingarrayitself_undefined(void)
{
	int	arr_ft[5] = {3, 2, 5, 7, 1};
	int	arr_lib[5] = {3, 2, 5, 7, 1};

	printf("\nTeste com array tipo int\n");
	printf("\nsrc = arr[0]+3 e n = 3\n");
	printf("\nAntes arr[0] ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\nAntes arr[1] ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\nAntes arr[2] ft %d, lib %d", arr_ft[2], arr_lib[2]);
	printf("\nAntes arr[3] ft %d, lib %d", arr_ft[3], arr_lib[3]);
	printf("\nAntes arr[4] ft %d, lib %d\n", arr_ft[4], arr_lib[4]);
	ft_memcpy(&arr_ft[2], arr_ft, 3*sizeof(int));
	memcpy(&arr_lib[2], arr_lib, 3*sizeof(int));
	printf("\nDepois arr[0] ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\nDepois arr[1] ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\nDepois arr[2] ft %d, lib %d", arr_ft[2], arr_lib[2]);
	printf("\nDepois arr[3] ft %d, lib %d", arr_ft[3], arr_lib[3]);
	printf("\nDepois arr[4] ft %d, lib %d\n\n", arr_ft[4], arr_lib[4]);
}

void	run_test_ft_memcpy(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_memcpy_ftvslibc_normalconditions_true);
	RUN_TEST(test_ft_memcpy_ftvslibc_overlappingsrcisgreaterthandest_undefined);
	RUN_TEST(test_ft_memcpy_ftvslibc_overlappingnbytesisgreaterthandest_undefined);
	RUN_TEST(test_ft_memcpy_ftvslibc_intarraynormalconditions_true);
	RUN_TEST(test_ft_memcpy_ftvslibc_intarrayoverlappingarrayitself_undefined);
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
// 	RUN_FT_TEST(00, ft_memcpy)
// 	return (0);
// }
