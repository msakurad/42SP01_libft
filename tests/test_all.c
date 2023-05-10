#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(void)
{
	printf("\n----------------\n\n");
	printf("test_ft_isalpha\n\n");
	run_test_ft_isalpha();
	printf("\n----------------\n\n");
	printf("test_ft_isdigit\n\n");
	run_test_ft_isdigit();
	return (0);
}
