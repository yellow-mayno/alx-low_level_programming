#include <unistd.h>
#include <string.h>
/**
* _puts - sdfsdf
* @str: sdfsdf
* Return: voidsdfsdf
*/
void _puts(char *str)
{
	int len = strlen(str);
	char lnfd[] = {'\n'};

	write(1, str, len);
	write(1, lnfd, 1);
}
