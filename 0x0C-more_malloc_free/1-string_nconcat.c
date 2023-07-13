#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	int i, j, k;
	char *str1, *str2;
	char *cat;

	if (s1 == NULL)
		str1 = empty;
	if (s2 == NULL)
		str2 = empty;
	cat = malloc(sizeof(char) * (strlen(str1) + n + 1));
	if (cat == NULL)
		return (cat);
	strcpy(cat, str1);
	printf("%s\n", cat);
	strncpy(&cat[strlen(str1)], str2, n);
	cat[strlen(str1) + n] = '\0';
	printf("%s\n", cat);
	return (cat);
}
