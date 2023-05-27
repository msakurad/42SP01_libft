#include "tests.h"

void	test_ft_lstdelone_bonus_deletenode(void)
{
	t_list	*head;
	t_list	*current;
	// delptr	del;


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
	del_lstcontent(head->content);
	printf("content n: %s\n", (char*)head->content);
	// del = &del_lstcontent;
	// ft_lstdelone(head, del_lstcontent);
	// printf("\nDeleta o nó 5\n");
	// current = head;
	// printf("content n: %s\n", (char*)current->content);
	// while (current)
	// {
	// 	printf("content n: %s\n", (char*)current->content);
	// 	current = current->next;
	// }
	// TEST_ASSERT_EQUAL_STRING("sobre 1", node1->content);
	free(head);
	free(current);
}

void	run_test_ft_lstdelone_bonus(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_lstdelone_bonus_deletenode);
	UNITY_END();
}
