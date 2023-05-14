#include "tests.h"

void	test_ft_memmove_ftvslibc_normalconditions_true(void)
{
	char str_ft[9];
	char str_lib[9];

	strcpy(str_ft, "Exemplos");
	strcpy(str_lib, "Exemplos");
	printf("Antes dest ft %s vs lib %s\n", str_ft, str_lib);
	printf("O src é cranberry, n = 4\n");

	ft_memmove(str_ft, "cranberry", 4*sizeof(char));
	memmove(str_lib, "cranberry", 4*sizeof(char));
	printf("\nDepois cmp ft %s vs lib %s\n\n", str_ft, str_lib);
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memmove_ftvslibc_usingsamestring_true(void)
{
	char str_lib[50] = "palha com batata";
	char str_ft[50] = "palha com batata";

	printf("\nAntes dest ft %s vs lib %s\n", str_ft, str_lib);
	printf("src=str[10] dest=str[0], n = 5\n");
	memmove(str_lib, &str_lib[10],5);
	ft_memmove(str_ft, &str_ft[10],5);
	printf("\nDepois cmp ft %s vs lib %s\n\n", str_ft, str_lib);
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

/*
Ocorre overlap quando os ponteiros do src e dest acabam se encontrando,
no mesmo endereço de memória.
*/
void	test_ft_memmove_ftvslibc_overlapsrcgreaterthandest_undefined(void)
{
	char str_lib[50] = "palha com batata";
	char str_ft[50] = "palha com batata";

	printf("\nAntes dest ft %s vs lib %s\n", str_ft, str_lib);
	printf("src=str[4] dest=str[0], n = 7\n");
	memmove(str_lib, &str_lib[4],7);
	ft_memmove(str_ft, &str_ft[4],7);
	printf("\nDepois cmp ft %s vs lib %s\n\n", str_ft, str_lib);
	//TEST_IGNORE_MESSAGE("teste ft vs lib overlap -> return undefined");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

/*
Ocorre overlap quando os ponteiros do src e dest acabam se encontrando,
no mesmo endereço de memória.
*/
void	test_ft_memmove_ftvslibc_overlapdestgreaterthansrc_undefined(void)
{
	char str_lib[50] = "abcdefghijklmno";
	char str_ft[50] = "abcdefghijklmno";

	printf("\nAntes dest ft %s vs lib %s\n", str_ft, str_lib);
	printf("src=str[2] dest=str[5], n = 7\n");
	memmove(&str_lib[5], &str_lib[2],7);
	ft_memmove(&str_ft[5], &str_ft[2],7);
	printf("\nDepois cmp ft %s vs lib %s\n\n", str_ft, str_lib);
	//TEST_IGNORE_MESSAGE("teste ft vs lib overlap -> return undefined");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memmove_ftvslibc_intarraynormalconditions_true(void)
{
	int	arr_ft[5] = {3, 3, 5, 7, 1};
	int	arr_lib[5] = {3, 3, 5, 7, 1};
	int	src[3] = {1, 2, 3};

	printf("\nTeste com array tipo int em condições normais\n");
	printf("\nsrc = {1,2,3} e n = 3\n");
	printf("\nAntes: arr_ft %d, %d, %d, %d, %d", arr_ft[0], arr_ft[1], arr_ft[2], arr_ft[3], arr_ft[4]);
	printf("\nAntes: arr_lib %d, %d, %d, %d, %d", arr_lib[0], arr_lib[1], arr_lib[2], arr_lib[3], arr_lib[4]);
	ft_memmove(arr_ft, src, 3*sizeof(int));
	memmove(arr_lib, src, 3*sizeof(int));
	printf("\nDepois: arr_ft %d, %d, %d, %d, %d", arr_ft[0], arr_ft[1], arr_ft[2], arr_ft[3], arr_ft[4]);
	printf("\nDepois: arr_lib %d, %d, %d, %d, %d", arr_lib[0], arr_lib[1], arr_lib[2], arr_lib[3], arr_lib[4]);
}

void	test_ft_memmove_ftvslibc_intarrayoverlaparrayitself_undefined(void)
{
	int	arr_ft[5] = {3, 2, 5, 7, 1};
	int	arr_lib[5] = {3, 2, 5, 7, 1};

	printf("\nTeste com array tipo int dando overlapping\n");
	printf("\nsrc = arr[0] e dest = arr[2] e n = 3\n");
	printf("\nAntes: arr_ft %d, %d, %d, %d, %d", arr_ft[0], arr_ft[1], arr_ft[2], arr_ft[3], arr_ft[4]);
	printf("\nAntes: arr_lib %d, %d, %d, %d, %d", arr_lib[0], arr_lib[1], arr_lib[2], arr_lib[3], arr_lib[4]);
	ft_memmove(arr_ft, &arr_ft[2], 3*sizeof(int));
	memmove(arr_lib, &arr_lib[2], 3*sizeof(int));
	printf("\nDepois: arr_ft %d, %d, %d, %d, %d", arr_ft[0], arr_ft[1], arr_ft[2], arr_ft[3], arr_ft[4]);
	printf("\nDepois: arr_lib %d, %d, %d, %d, %d", arr_lib[0], arr_lib[1], arr_lib[2], arr_lib[3], arr_lib[4]);
}

void	run_test_ft_memmove(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_memmove_ftvslibc_normalconditions_true);
	RUN_TEST(test_ft_memmove_ftvslibc_usingsamestring_true);
	RUN_TEST(test_ft_memmove_ftvslibc_overlapdestgreaterthansrc_undefined);
	RUN_TEST(test_ft_memmove_ftvslibc_overlapsrcgreaterthandest_undefined);
	RUN_TEST(test_ft_memmove_ftvslibc_intarraynormalconditions_true);
	RUN_TEST(test_ft_memmove_ftvslibc_intarrayoverlaparrayitself_undefined);
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
// 	RUN_FT_TEST(00, ft_memmove)
// 	return (0);
// }
