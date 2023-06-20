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

	if (z < 0)
		z = z * (-1);
	ld = z % 10;
	_putchar('0' + ld);
	return (ld);
}
