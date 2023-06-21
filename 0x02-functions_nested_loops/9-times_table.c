#include "main.h"
/**
 * times_table - sdfsdsdf
 *
 * Return: voidsqkdflkdsqfj
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			if ((i * j) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			if (j == 9)
				_putchar('\n');
		}
	}
}
