#include "tests.h"

t_list	*add_link(t_list *list, void *content)
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
