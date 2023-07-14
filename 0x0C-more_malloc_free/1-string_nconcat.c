#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int _strlen(char *);
/**
* string_nconcat - task 1
* @s1: sdfd
* @s2: dfgdfg
* @n: dfg
* Return: dfg
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char empty[] = "";
	char *str1, *str2;
	char *cat;

	if (s1 == NULL)
		str1 = empty;
	else
		str1 = s1;
	if (s2 == NULL)
		str2 = empty;
	else
		str2 = s2;
	cat = malloc(sizeof(char) * (strlen(str1) + n + 1));
	if (cat == NULL)
		return (cat);
	strcpy(cat, str1);
	strncpy(&cat[strlen(str1)], str2, n);
	cat[strlen(str1) + n] = '\0';
	return (cat);
}

/**
* _strlen - counter
* @s: sdfdsf
* Return: sdfsd
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
