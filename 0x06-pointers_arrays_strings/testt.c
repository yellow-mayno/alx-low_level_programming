#include <stdio.h>
int main(void)
{
	int n = 0;
	int m = 100;
	char *p = &n;
	int *q = &m;

	printf("%p\n", p);
	printf("%d\n", *(p + 1));
	return(0);
}
