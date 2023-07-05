#include "main.h"
#include <string.h>
/**
* _strlen_recursion - sdfsdf
* @s: sdsdfsdf
* Return: int sdfsd
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!strcmp(s, ""))
		return (i);
	else
		return (1 + _strlen_recursion(s + 1));
}
