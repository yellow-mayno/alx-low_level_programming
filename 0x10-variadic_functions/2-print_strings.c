#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - print variadic
* @seperator: sep
* @n: number of args
* @... : variadic
* Return: none
*/
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *to_print;

	if (n == 0)
		putchar(10);
	if (seperator == NULL)
		seperator = "\0";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		to_print = va_arg(args, char *);
		if (to_print != NULL)
			printf("%s", to_print);
		else
			printf("(nil)");
		if (i != n - 1)
			printf("%s", seperator);
		else
		{
			putchar(10);
			return;
		}
	}
	va_end(args);
}
