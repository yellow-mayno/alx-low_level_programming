#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - print variadic
* @seperator: sep
* @n: number of args
* @... : variadic
* Return: none
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		putchar(10);
	if (seperator == NULL)
		seperator = "\0";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(args, int));
			return;
		}
		printf("%d%s", va_arg(args, int), seperator);
	}
	va_end(args);
}
