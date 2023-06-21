#include "main.h"
/**
 * jack_bauer - sdfsdfqsfs
 *
 * Return: 0 sdfsdfqsdf
 */
void jack_bauer(void)
{
	int i, j, l, m;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (l = 0; l < 6; l++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + l);
					_putchar('0' + m);
					_putchar('\n');
				}
			}

			if (i == 2 && j == 3 && l == 5 && m == 9)
				return;
		}
	}
}
