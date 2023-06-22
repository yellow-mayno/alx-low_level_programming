#include "main.h"
/**
* print_square - fdjdsnfkjdskfjsd
* @mok: sdfsdfsdf I hate betty and her *&/&**!! description
* Return: dssdfsd
*/
void print_square(int mok)
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
			_putchar('#');
		_putchar(0xA);
	}
}
