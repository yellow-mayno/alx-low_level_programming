#include <stdio.h>

int test(long i)
{
	printf("%ld\n", 100000000000000);
	return (i / 10000000000);
}
int main(void)
{
	int i = 2;
	test(i);
	return (0);
}
