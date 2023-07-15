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
	void *new;
	int i = 0;

	new = malloc(new_size * sizeof(*ptr));
	if (new == NULL)
		return (NULL);
	for (; i < old_size; i++)
		new[i] = ptr[i];
	free(ptr);
	return (new);
}

