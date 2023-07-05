#include <string.h>
#include <stdio.h>
/**
* is_palindrome - sdfsd
* @s: dsqfsfds
* Return: sdfsfdsd
*/
int is_palindrome(char *s)
{
	int i;
	char cpy[] = "                                                      ";
	char *ptr = cpy;

	strcpy(cpy, s);
	i = strlen(cpy);
	if (!strcmp(cpy, ""))
		return (1);
	if (cpy[0] == cpy[i - 1])
	{
		cpy[i - 1] = '\0';
		ptr++;
		return (is_palindrome(ptr));
	}
	else
		return (0);
}
