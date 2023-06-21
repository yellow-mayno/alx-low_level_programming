#include "main.h"
/**
 * print_last_digit - sdfsdfsdfsd
 * @z : sdfsdfsdf
 *
 * Return: 0 dsfs
 */
int print_last_digit(int z)
{
	int ld;

	ld = z % 10;
	if (ld < 0)
		ld = ld * (-1);
	_putchar('0' + ld);
	return (ld);
}
