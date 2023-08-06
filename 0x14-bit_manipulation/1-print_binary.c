#include "main.h"
/**
* print_binary - print an uint
* @n: an unsigned int
* Return: void
*/
void print_binary(unsigned long int n)
{
	int i, start = 0;

	i = sizeof(unsigned long int) * 8 - 1;
	if (n == 0)
		_putchar('0');
	else
	{
		for (; i >= 0; i--)
		{
			if (n >> i != 0)
				start = 1;
			if (start == 1)
				_putchar('0' + ((n >> i) & 1));
		}
	}
}
