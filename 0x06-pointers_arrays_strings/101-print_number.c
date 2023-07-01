int power(int, int);
#include "main.h"
/**
* print_number - dsfdsfs
* @n: sdfsdfsds
* Return: no return void dsfsds
*/
void print_number(int n)
{
	int i, j;

	/* if n is 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* if n is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	/* calculate the number of digits */
	i = 0;
	while (n / power(10, i))
		i++;
	i--;
	/* start printing */
	for (j = i; j >= 0; j--)
	{
		_putchar((n / power(10, j)) + '0');
		n = n  - (n / power(10, j)) * power(10, j);
	}
}

/**
* power - dsqfsdfsfd
* @a: sdsfds
* @b: dfgdfg
* Return: dfsdf
*/
int power(int a, int b)
{
	int i, r;

	r = 1;
	for (i = 0; i < b; i++)
		r = r * a;
	return (r);
}

