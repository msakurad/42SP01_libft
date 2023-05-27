#include "tests.h"

char	f_changechr(unsigned int i, char c)
{
	char	new_c;

	printf("unsigned int: %d\nchar c: %c\n", i, c);
	new_c = c + 1;
	return (new_c);
}
