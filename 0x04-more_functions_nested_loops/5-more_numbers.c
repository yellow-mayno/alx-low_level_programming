#include "main.h"
/**
* more_numbers - dfdsfsdf
*
* Return: 0sdfsdfsdfdsf
*/
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
