#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - sdfsdfsdf
* @str: dfgdfg
* Return: sdfsdf
*/
char *_strdup(char *str)
{
	int i = 0, y;
	char *cpy;

	if (!strcmp(str, "") || !strcmp(str, NULL))
		return (NULL);
	if (*str != '\0')
	{
		while (str[i] != '\0')
		{
			i++;
		}
		cpy = malloc(i * sizeof(char));
		if (cpy == NULL)
			return (NULL);
		for (y = 0; y < i; y++)
		{
			cpy[y] = str[y];
			/* printf("%s\n%s\n%d\n", str, cpy, i); */
		}
	}
	else
		return (NULL);
	return (cpy);
}
