#include "tests.h"

void	test_ft_putnbr_fd_1234_returns1234(void)
{
	int		n;
	int		fd;

	n = 100;
	fd = 1;
	ft_putnbr_fd(n, fd);
	printf("\n\n");

	n = __INT_MAX__;
	ft_putnbr_fd(n, fd);
	printf("\n\n");
}

void	test_ft_putnbr_fd_negativenumber_returnsminus1234(void)
{
	int		n;
	int		fd;

	n = -1;
	fd = 1;
	ft_putnbr_fd(n, fd);
	printf("\n\n");

	n = INT_MIN;
	ft_putnbr_fd(n, fd);
	printf("\n\n");
}

void	test_ft_putnbr_fd_zero_zero(void)
{
	int		n;
	int		fd;

	n = 0;
	fd = 1;
	ft_putnbr_fd(n, fd);
	printf("\n\n");
}

void	run_test_ft_putnbr_fd(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_putnbr_fd_1234_returns1234);
	RUN_TEST(test_ft_putnbr_fd_negativenumber_returnsminus1234);
	RUN_TEST(test_ft_putnbr_fd_zero_zero);
	UNITY_END();
}
