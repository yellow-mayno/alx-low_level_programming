#include <stdio.h>
#include "main.h"

int main(void)
{
	char *n1 = "1198";
	char *n2 = "229988";
	char *r;
	int size = 10;

	infinite_add(n1, n2, r, size);
	printf("%s\n", r);
	return (0);
}
