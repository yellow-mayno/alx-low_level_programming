#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - sqdfsdfs
* @str: sdfsdf
* Return: sdfsdf
*/
void _print_rev_recursion(char *str)
{
	int i = 0;
	char s[] = "                                                                ";
	char *p;

	if (*str != "")
	{
		strcpy(s, str);
		i = strlen(s);
		i--;
		p = s + i;
		if (p == s)
		{
			_putchar(*p);
		}
		else
		{
			_putchar(*p);
			*p = '\0';
			_print_rev_recursion(s);
		}
	}
}
