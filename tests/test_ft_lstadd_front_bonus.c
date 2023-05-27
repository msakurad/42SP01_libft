#include "tests.h"

void	test_ft_lstadd_front_bonus_changeposition(void)
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
	current = ft_lstnew("O NOVO NÓ");
	ft_lstadd_front(&head, current);
	printf("\nNovo nó aponta para o nó 5\n");
	while (current)
	{
		printf("content n: %s\n", (char*)current->content);
		current = current->next;
	}
	// TEST_ASSERT_EQUAL_STRING("sobre 1", node1->content);
	free(head);
	free(current);
}

void	run_test_ft_lstadd_front_bonus(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_lstadd_front_bonus_changeposition);
	UNITY_END();
}
