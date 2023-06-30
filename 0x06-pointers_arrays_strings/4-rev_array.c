#include <stdio.h>
/**
* reverse_array - sdfsdfs
* @a: dsf
* @n: fdsfs
* Return: sdf
*/
void reverse_array(int *a, int n)
{
	
	int i, d;

	for (i = 0; i < n / 2; i++)
	{
		d = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = d;
	}
}
