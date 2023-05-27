#include "tests.h"

void del_lstcontent(void *content)
{
	// similar to ft_bzero(content);
	unsigned char	*ptr_content;
	int	n;

	ptr_content = (unsigned char *)content;
	n = ft_strlen((char *)ptr_content) + 1;
	printf("testaux, ptr: %s, n: %d\n", ptr_content, n);
	while (n--)
	{
		*ptr_content = '\0';
		printf("testaux, ptr: %c\n", *ptr_content);
		ptr_content++;
	}
}
