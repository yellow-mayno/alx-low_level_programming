#include <stddef.h>
/**
* int_index - sdfsfd
* @array: sdfsd
* @size: sdfsd
* @cmp: sdfsdf
* Return: sdfsdf
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = -1;

	if (array == NULL || cmp == NULL)
		return (res);
	if (size <= 0)
		return (res);
	for (i = 0; !cmp(array[i]) && i < size; i++)
		;
	if (i != size)
		res =  i;
	return (res);
}
