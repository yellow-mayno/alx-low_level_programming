#include "dog.h"
#include <stdio.h>
/**
* print_dog - dfgdfg
* @d: dsgfdfg
* Return: dsfgdf
*/
void print_dog(struct dog *d)
{
	char *t = "(nil)";

	if (d == NULL)
		return;
	if ((*d).name != NULL)
		printf("Name : %s\n", (*d).name);
	else
		printf("Name : %s\n", t);
	if (&(*d).age != NULL)
		printf("Age : %f\n", (*d).age);
	else
		printf("Age : %s\n", t);
	if ((*d).owner != NULL)
		printf("Owner : %s\n", (*d).owner);
	else
		printf("Owner : %s\n", t);
}
