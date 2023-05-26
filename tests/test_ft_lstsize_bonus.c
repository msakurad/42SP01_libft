#include "tests.h"

static t_list	*add_link(t_list *list, void *content);

void	test_ft_lstsize_bonus_countsizeoflist(void)
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
	printf("\nsize: %d\n", ft_lstsize(head));
	TEST_ASSERT_EQUAL_INT(5, ft_lstsize(head));
	free(head);
	free(current);
}

void	run_test_ft_lstsize_bonus(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_lstsize_bonus_countsizeoflist);
	UNITY_END();
}

static t_list	*add_link(t_list *list, void *content)
{
	t_list	*new;

	if (list == NULL)
		return (ft_lstnew(content));
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = list;
	}
	return (new);
}
