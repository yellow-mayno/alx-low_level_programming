#include <stdarg.h>
/**
* sum_them_all - sum
* @n: number of args
* @...: variadic
* Return: sum
*/
int sum_them_all(const int n, ...)
{
	int i, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
