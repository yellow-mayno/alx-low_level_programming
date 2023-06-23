#include "main.h"
/**
* print_times_table - sdfsd
* @n : dfsfs
* Return: sdfsdfsf
*/
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i < n + 1; i++)
	{
		_putchar('0');
		for (j = 1; j < n + 1; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j + '0');
			}
			else if (i * j < 100)
			{
				_putchar(' ');
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar((i * j) / 100 + '0');
				_putchar(((i * j) / 10) % 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
		}
		_putchar(10);
	}
}
