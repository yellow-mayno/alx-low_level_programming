#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* str_concat - assasss
* @s1: sdfsdfsd
* @s2 : sdfsdf
* Return: dsfgds
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	char *cpy;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
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
