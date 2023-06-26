#include <string.h>
/**
* rev_string - sdfsdfsdf
* @s: fdsfsdf
* Return: sdfsdf
*/
void rev_string(char *s)
{
	int l = strlen(s), i;
	char cpstr[1000];

	strcpy(cpstr, s);
	for (i = 0; i < l; i++)
		s[i] = cpstr[l - 1 - i];
}
