#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* str_concat - assasss
* @str1: sdfsdfsd
* @str2 : sdfsdf
* Return: dsfgds
*/
char *str_concat(char *str1, char *str2)
{
	int i;
	char *cpy;
	char *s1, *s2;
	char *empty = ""
	if (str1 == NULL)
		s1 = empty;
	else
		s1 = str1;
	if (str2 == NULL)
		s2 = empty;
	else
		s2 = str2;
	/* puts("------1st waypoint------"); */
	i = strlen(s1) + strlen(s2);
	cpy = malloc((unsigned int) i);
	if (cpy == NULL)
		return (cpy);
	/* puts("------2st waypoint------"); */
	strcpy(cpy, s1);
	strcpy(cpy + strlen(s1), s2);
	return (cpy);
}
