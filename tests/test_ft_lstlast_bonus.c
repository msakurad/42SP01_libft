#include "tests.h"

void	test_ft_lstlast_bonus_findpositionbeforenull(void)
{
	t_list	*head;
	t_list	*current;

	head = NULL;
	head = add_link(head, "sobre 1");
	head = add_link(head, "sobre 2");
	head = add_link(head, "sobre 3");
	head = add_link(head, "sobre 4");
	head = add_link(head, "sobre 5");

	printf("\nLista inicializada\n");
	current = head;
	while (current)
	{
		printf("content n: %s\n", (char*)current->content);
		current = current->next;
	}
	head = ft_lstlast(head);
	printf("\ncontent of last node: %s\n", (char *)head->content);
	TEST_ASSERT_EQUAL_STRING("sobre 1", (char *)head->content);
	free(head);
	free(current);
}

void	run_test_ft_lstlast_bonus(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_lstlast_bonus_findpositionbeforenull);
	UNITY_END();
}
