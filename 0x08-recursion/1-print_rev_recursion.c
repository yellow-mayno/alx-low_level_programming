#include "main.h"
/**
* _print_rev_recursion - sqdfsdfs
* @str: sdfsdf
* Return: sdfsdf
*/
void _print_rev_recursion(char *str)
{
	int i = 0;
	char s[] = "                        ";
	char *p;

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
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
