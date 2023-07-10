#include <stdlib.h>
/**
* create_array - sdfsdfsd
* @size: sdfsdfsd
* @c: sdfsdfsdf
* Return: sdfsdf
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	for (; i < size; i++)
		str[i] = c;
	return (str);
}
