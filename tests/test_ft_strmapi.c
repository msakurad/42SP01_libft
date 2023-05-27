#include "tests.h"

void	test_ft_strmapi_changestrchrplusone(void)
{
	char	*str;
	char	*new_str;

	str = "abcde";
	new_str = ft_strmapi(str,&f_changechr);
	printf("str: %s e new_str: %s\n", str, new_str);
}

void	run_test_ft_strmapi(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strmapi_changestrchrplusone);
	UNITY_END();
}
