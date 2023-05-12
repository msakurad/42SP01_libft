#include "tests.h"

void	test_ft_memset_ftvslibc_normalconditions_true(void)
{
	char str_ft[9];
	char str_lib[9];

	strcpy(str_ft, "Exemplos");
	strcpy(str_lib, "Exemplos");

	ft_memset(str_ft, 'A', 5);
	memset(str_lib, 'A', 5);
	printf("cmp ft %s vs lib %s\n", str_ft, str_lib);
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memset_ftvslibc_whenpointerisnull_undefined(void)
{
	char str_ft[9];
	char str_lib[9];

	ft_memset(str_ft, 'A', 5);
	memset(str_lib, 'A', 5);
	printf("\ncmp ft %s vs lib %s\n", str_ft, str_lib);
	TEST_IGNORE_MESSAGE("teste quando *s aponta para array vazio");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memset_ftvslibc_whennisgreaterthanarray_undefined(void)
{
	char str_ft[3];
	char str_lib[3];

	ft_memset(str_ft, 'A', 5);
	memset(str_lib, 'A', 5);
	printf("\ncmp ft %s vs lib %s\n", str_ft, str_lib);
	TEST_IGNORE_MESSAGE("teste quando n > o tamanho do array");
	TEST_ASSERT_EQUAL_STRING(str_lib, str_ft);
}

void	test_ft_memset_ftvslibc_intarrayc3_true(void)
{
	int	arr_ft[10] = {0};
	int	arr_lib[10] = {0};

	ft_memset(arr_ft, 3, 5);
	memset(arr_lib, 3, 5);
	/*
	Nesse caso, o valor c fica como 0x03 que é 3 em char hex.
	Como o array é do tipo int, cada elemento do array tem 4 bytes,
	ou seja, vai ser representado por 4 bytes com o valor c.
	O primeiro elemento será preenchido por 4x o valor c.
	O segundo elemento, por 1x o valor c, pois o n = 5.
	arr_ft[0] = 0x03030303
	arr_ft[1] = 0x03
	*/
	printf("\nTeste com array tipo int");
	printf("\n50462995 ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\n50462995 ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\n50462995 ft %d, lib %d\n", arr_ft[2], arr_lib[2]);
}

void	test_ft_memset_ftvslibc_intarrayc300_true(void)
{
	int	arr_ft[10] = {0};
	int	arr_lib[10] = {0};

	ft_memset(arr_ft, 300, 5);
	memset(arr_lib, 300, 5);
	/*
	A função converte o valor c em char que é composto por 1 byte.
	Ou seja, c pode ser definido um valor hex de 8 bits no max.
	Se o int c for maior que 255, a função trunca para caber só o 1 byte
	Ex: 300 -> 0x12c
	char (int c) -> 0x2c (a função corta o maior dígito para ficar 1 byte)
	0x2c = 44
	*/
	printf("\nTeste com array tipo int");
	printf("\n50462995 ft %d, lib %d", arr_ft[0], arr_lib[0]);
	printf("\n50462995 ft %d, lib %d", arr_ft[1], arr_lib[1]);
	printf("\n50462995 ft %d, lib %d\n", arr_ft[2], arr_lib[2]);
}

void	run_test_ft_memset(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_memset_ftvslibc_normalconditions_true);
	RUN_TEST(test_ft_memset_ftvslibc_whenpointerisnull_undefined);
	RUN_TEST(test_ft_memset_ftvslibc_whennisgreaterthanarray_undefined);
	RUN_TEST(test_ft_memset_ftvslibc_intarrayc3_true);
	RUN_TEST(test_ft_memset_ftvslibc_intarrayc300_true);
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
// 	RUN_FT_TEST(ft_memset)
// 	return (0);
// }
