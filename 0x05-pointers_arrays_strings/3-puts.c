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

	write(1, str, len);
	write(1, '\n', 1);
}
