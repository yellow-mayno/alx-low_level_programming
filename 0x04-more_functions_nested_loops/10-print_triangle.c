#include "main.h"
/**
* print_triangle - fdjdsnfkjdskfjsd
* @mok: sdfsdfsdf I hate betty and her *&/&**!! description
* Return: dssdfsd
*/
void print_triangle(int mok)
{
	int i, j;

	if (mok <= 0)
	{
		_putchar(10);
		return;
	}
	for (i = 0; i < mok; i++)
	{
		for (j = 0; j < mok; j++)
		{
			if (j >= (mok - i - 1))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar(0xA);
	}
}
