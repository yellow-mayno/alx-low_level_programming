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

	if (strcmp(str, ""))
	{
/* create a copy for str or segmentation error will occur when mdyn it */
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
