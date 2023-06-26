#include <unistd.h>
#include <string.h>
/**
* print_rev - sdfsdfsdf
* @s: fdsfsdf
* Return: sdfsdf
*/
void print_rev(char *s)
{
	int l = strlen(s), i;
	char inrev[l];
	char lnfd[] = {'\n'};

	for (i = 0; i < l; i++)
		inrev[i] = s[l - 1 - i];
	write(1, inrev, l);
	write(1, lnfd, 1);
}
