#include <stdlib.h>
/**
* malloc_checked - task 0
* @b: dfgdfg
* Return: 0 / 98
*/
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr != NULL)
		return (arr);
	exit(98);
}
