#include <unistd.h>
#include <string.h>
#include "main.h"
/**
* print_rev - sdfsdfsdf
* @s: fdsfsdf
* Return: sdfsdf
*/
void print_rev(char *s)
{
	int l = strlen(s), i;

	for (i = 0; i < l; i++)
		_putchar(s[l - 1 - i]);
	_putchar('\n');
}
