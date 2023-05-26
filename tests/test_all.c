#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(int argc, char **argv)
{
	enum Tests test_first;
	enum Tests test_last;
	int	nbr_tests;
	char	*test_part_argv;
	int	count;

	test_part_argv = (char *)malloc(sizeof(char) * 30);
	count = 1;
	if (argc > 1)
		strcpy(test_part_argv, argv[1]);
	if (!strcmp(test_part_argv, "p1"))
	{
		test_first = Tests_ft_isalpha;
		test_last = Tests_ft_strdup;
	}
	else if (!strcmp(test_part_argv, "p2"))
	{
		test_first = Tests_ft_substr;
		test_last = Tests_ft_putnbr_fd;
	}
	else if (!strcmp(test_part_argv, "bonus"))
	{
		test_first = Tests_ft_lstnew_bonus;
		test_last = Tests_ft_lstmap_bonus;
	}
	else
	{
		test_first = Tests_ft_isalpha;
		test_last = Tests_ft_putnbr_fd;
	}
	nbr_tests = test_last - test_first;
	if (atoi(test_part_argv))
	{
		count = 0;
		nbr_tests = count;
		test_first = atoi(test_part_argv);
	}
	while (count <= nbr_tests)
	{
		run_test_ft((int)test_first + count);
		count++;
	}
	printf("\n\n\033[42mTOTAL OF TESTS: %d\033[0m\n", count);
	return (0);
	// return (UNITY_END());
}

void	run_test_ft(int enum_test)
{
	switch (enum_test)
	{
	case 1:
		RUN_FT_TEST(01, test_ft_isalpha)
		break;
	case 2:
		RUN_FT_TEST(02, test_ft_isdigit)
		break;
	case 3:
		RUN_FT_TEST(03, test_ft_isalnum)
		break;
	case 4:
		RUN_FT_TEST(04, test_ft_isascii)
		break;
	case 5:
		RUN_FT_TEST(05, test_ft_isprint)
		break;
	case 6:
		RUN_FT_TEST(06, test_ft_strlen)
		break;
	case 7:
		RUN_FT_TEST(07, test_ft_memset)
		break;
	case 8:
		RUN_FT_TEST(08, test_ft_bzero)
		break;
	case 9:
		RUN_FT_TEST(09, test_ft_memcpy)
		break;
	case 10:
		RUN_FT_TEST(10, test_ft_memmove)
		break;
	case 11:
		// RUN_FT_TEST(11, test_ft_strlcpy)
		break;
	case 12:
		// RUN_FT_TEST(12, test_ft_strlcat)
		break;
	case 13:
		RUN_FT_TEST(13, test_ft_toupper)
		break;
	case 14:
		RUN_FT_TEST(14, test_ft_tolower)
		break;
	case 15:
		RUN_FT_TEST(15, test_ft_strchr)
		break;
	case 16:
		RUN_FT_TEST(16, test_ft_strrchr)
		break;
	case 17:
		RUN_FT_TEST(17, test_ft_strncmp)
		break;
	case 18:
		RUN_FT_TEST(18, test_ft_memchr)
		break;
	case 19:
		RUN_FT_TEST(19, test_ft_memcmp)
		break;
	case 20:
		RUN_FT_TEST(20, test_ft_strnstr)
		break;
	case 21:
		RUN_FT_TEST(21, test_ft_atoi)
		break;
	case 22:
		RUN_FT_TEST(22, test_ft_calloc)
		break;
	case 23:
		RUN_FT_TEST(23, test_ft_strdup)
		break;
	// Part 2
	case 24:
		RUN_FT_TEST(24, test_ft_substr)
		break;
	case 25:
		RUN_FT_TEST(25, test_ft_strjoin)
		break;
	case 26:
		RUN_FT_TEST(26, test_ft_strtrim)
		break;
	case 27:
		RUN_FT_TEST(27, test_ft_split)
		break;
	case 28:
		RUN_FT_TEST(28, test_ft_itoa)
		break;
	// case 29:
	// 	RUN_FT_TEST(29, test_ft_strmapi)
	// 	break;
	// case 30:
	// 	RUN_FT_TEST(30, test_ft_striteri)
	// 	break;
	// case 31:
	// 	RUN_FT_TEST(31, test_ft_putchar_fd)
	// 	break;
	// case 32:
	// 	RUN_FT_TEST(32, test_ft_putstr_fd)
	// 	break;
	// case 33:
	// 	RUN_FT_TEST(33, test_ft_putendl_fd)
	// 	break;
	case 34:
		RUN_FT_TEST(34, test_ft_putnbr_fd)
		break;
	case 35:
		RUN_FT_TEST(35, test_ft_lstnew_bonus)
		break;
	case 36:
		RUN_FT_TEST(36, test_ft_lstadd_front_bonus)
		break;
	case 37:
		RUN_FT_TEST(37, test_ft_lstsize_bonus)
		break;
	case 38:
		RUN_FT_TEST(38, test_ft_lstlast_bonus)
		break;
	case 39:
		RUN_FT_TEST(39, test_ft_lstadd_back_bonus)
		break;
	default:
		printf("Check again the argument passed in the terminal\n");
		break;
	}
}
