#include <stdio.h>
/**
* print_diagsums - sdfsdf
* @a: sdfsdfsdfs
* @size: dfsfsdf
* Return: sdfsdf
*/
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 = d1 + a[i * size + i];
		d2 = d2 + a[i * size + size - 1 - i];
	}
	printf("%d, %d\n", d1, d2);
}
