#include <stdlib.h>
/**
* array_range - dsfgdsfds
* @min: min
* @max: sdfff
* Return: sdfsdf
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, len = max - min + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		arr[i] = min + i;
	return (arr);
}

