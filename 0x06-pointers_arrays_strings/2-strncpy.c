#include <stdio.h>
/**
* _strncpy - dsfsdf
* @dest: dsfsfd
* @src: sdfsdf
* @n: sdfsd
* Return: dfgdfg
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
