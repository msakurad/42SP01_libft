#include "tests.h"

void	test_ft_lstnew_bonus_createnewnode(void)
{
	char	*str;
	t_list	*new;

	str = "toto";
	new = ft_lstnew(str);
	printf("str: %s \nnew->content: %s\n", str, (char *)new->content);
	TEST_ASSERT_EQUAL_STRING("toto", new->content);
	free(new);
}

void	run_test_ft_lstnew_bonus(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_lstnew_bonus_createnewnode);
	UNITY_END();
}
