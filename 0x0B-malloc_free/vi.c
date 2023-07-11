#include <stdio.h>
int main(void)
{
	char *ptr;

	ptr = "";
	printf("%s\n%c\n%d\n", ptr, *ptr, *ptr);
	return (0);
}
