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
	int j = 0, i = 0;

	while (dest[j] != '\0')
		j++;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	if (i >= j)
		dest[i] = '\0';
	else
		dest[j] = '\0';
	return (dest);
}
