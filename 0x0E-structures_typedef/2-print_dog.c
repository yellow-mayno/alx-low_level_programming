#include <stdio.h>
/**
* print_dog - dfgdfg
* @d: dsgfdfg
* Return: dsfgdf
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name != NULL)
		printf("Name : %s\n", (*d).name);
	else
		printf("Name : %s\n", "(nil)");
	if ((*d).age != NULL)
		printf("Age : %d\n", (*d).age);
	else
		printf("Age : %s\n", "(nil)");
	if ((*d).owner != NULL)
		printf("Owner : %s\n", (*d).owner);
	else
		printf("Owner : %s\n", "(nil)");
}
