#include <stdio.h>
/**
* print_array - dsfsdf
* @a: dfgdfg
* @n: fgdfgd
* Return: gfhfg
*/
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	putchar(10);
}
