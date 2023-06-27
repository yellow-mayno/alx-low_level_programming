#include <stdio.h>
#include "main.h"
int main(void)
{
	char src[] = "source";
	char dest[] = "destination";

	printf("%s\n", dest);
	_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
