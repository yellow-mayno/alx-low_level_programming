#include <stdlib.h>
/**
* _realloc - sdfsdf
* @ptr: dfgdfg
* @old_size: sdf
* @new_size: sdf
* Return: sdfsdf
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i = 0;

	if (new_size <= old_size)
		return (ptr);
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (; i < old_size; i++)
		new[i] = *((char *)ptr + i);
	free(ptr);
	return (new);
}

