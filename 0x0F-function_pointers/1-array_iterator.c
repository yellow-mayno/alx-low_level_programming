#include <stddef.h>
/**
* array_iterator - sdfsdf
* @array: sdfsdf
* @size: sdfsdf
* @action: sdfsdf
* Return: sdfsd
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
