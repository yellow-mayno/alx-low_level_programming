#include "main.h"
#include <string.h>
/**
* puts_half - sdfsdfs
* @str: fdgfgd
* Return: dfssdfsd
*/
void puts_half(char *str)
{
	int i, l = strlen(str);
	int n;

	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l - 1) / 2;
	for (i = n; i < l; i++)
		_putchar(str[i]);
	_putchar(10);
}
