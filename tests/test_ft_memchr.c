#include "tests.h"

void	test_ft_memchr_ftvslibc_returnptr_true(void)
{
	char	*str;
	int		c;
	size_t	n;

	str = "camomila";
	c = 'a';
	n = 3;
	printf("\nstr=%s, procura '%c' ate n=%zu\n ft %p vs lib %p\n", str, c, n, ft_memchr(str, c, n), memchr(str, c, n));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_PTR(memchr(str, c, n), ft_memchr(str, c, n));
}

void	test_ft_memchr_ftvslibc_returnnull_nsishort(void)
{
	char	*str;
	int		c;
	size_t	n;

	str = "camomila";
	c = 'i';
	n = 3;
	printf("\nstr=%s, procura '%c' ate n=%zu\n ft %p vs lib %p\n", str, c, n, ft_memchr(str, c, n), memchr(str, c, n));
	TEST_ASSERT_EQUAL_PTR(memchr(str, c, n), ft_memchr(str, c, n));
}

void	test_ft_memchr_whenterminator_true(void)
{
	char	*str;
	int		c;
	size_t	n;

	str = "camomila";
	c = '\0';
	n = 10;
	printf("\nstr=%s, procura '%c' ate n=%zu\n ft %p vs lib %p\n", str, c, n, ft_memchr(str, c, n), memchr(str, c, n));
	TEST_ASSERT_EQUAL_PTR(memchr(str, c, n), ft_memchr(str, c, n));
}

void	test_ft_memchr_ftvslibc_bonjour_n2(void)
{
	char	*str;
	int		c;
	size_t	n;

	str = "bonjour";
	c = 'n';
	n = 2;
	printf("\nstr=%s, procura '%c' ate n=%zu\n ft %p vs lib %p\n", str, c, n, ft_memchr(str, c, n), memchr(str, c, n));
	//TEST_IGNORE_MESSAGE("teste ft vs lib fail -> return 2 x 1024");
	TEST_ASSERT_EQUAL_PTR(memchr(str, c, n), ft_memchr(str, c, n));
}

void	test_ft_memchr_ftvslibc_returnnull_charnotfound(void)
{
	char	*str;
	int		c;
	size_t	n;

	str = "camomila";
	c = 'X';
	n = 0;
	printf("\nstr=%s, procura '%c' ate n=%zu\n ft %p vs lib %p\n", str, c, n, ft_memchr(str, c, n), memchr(str, c, n));
	TEST_ASSERT_EQUAL_PTR(memchr(str, c, n), ft_memchr(str, c, n));
}

void	run_test_ft_memchr(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_memchr_ftvslibc_returnptr_true);
	RUN_TEST(test_ft_memchr_ftvslibc_returnnull_nsishort);
	RUN_TEST(test_ft_memchr_whenterminator_true);
	RUN_TEST(test_ft_memchr_ftvslibc_bonjour_n2);
	RUN_TEST(test_ft_memchr_ftvslibc_returnnull_charnotfound);
	UNITY_END();
}
