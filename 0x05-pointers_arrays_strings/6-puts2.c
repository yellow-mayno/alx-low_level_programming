#include "main.h"
#include <string.h>
/**
* puts2 - sdfsdfs
* @str: fdgfgd
* Return: dfssdfsd
*/
void puts2(char *str)
{
	int i, l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
