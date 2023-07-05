#include <stdio.h>
/**
* _sqrt_recursion - sdfsf
* @n: sdfsdf
* Return: sdfsdf
*/
int _sqrt_recursion(long n)
{
	if ((int)n < 0)
		return (0);
	else if (n == 1 || n == 0)
		return (n);
	if (n < 100000000)
		n = n * 100000000;
	if ((n / 100000000) == (n % 100000000))
		return (-1);
	if (n / 100000000 == (n % 100000000) * (n % 100000000))
		return (n % 100000000);
	else
		return (_sqrt_recursion(n + 1));
}
