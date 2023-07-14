#include <stdlib.h>
/**
* _calloc - dfsdf
* @nmeb: dsfgdfg
* @size: dsfgds
* Return: sdff
*/
void *_calloc(unsigned in nmeb, unsigned int size)
{
	void **matr;
	int i = 0, j = 0, k = 0;

	if (nmeb == 0 || size == 0)
		return (NULL);
	matr = malloc(nmeb * size(void *));
	if (matr == NULL)
	{
		free(matr);
		return (NULL);
	}
	for (; i < nmeb; i++)
	{
		matr[i] = malloc(size);
		if (matr[i] == NULL)
		{
			for (; j < (i + 1); j++)
				free(matr[j]);
			return (NULL);
		}
		for (; k < size; k++)
			matr[i][j] = 0;
	}
	return (matr);
}
