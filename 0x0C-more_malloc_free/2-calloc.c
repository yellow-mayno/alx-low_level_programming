#include <stdlib.h>
/**
* _calloc - dfsdf
* @nmeb: dsfgdfg
* @size: dsfgds
* Return: sdff
*/
void *_calloc(unsigned in nmeb, unsigned int size)
{
	void *matr;
	int k = 0;

	if (nmeb == 0 || size == 0)
		return (NULL);
	matr = malloc(nmeb * size);
	if (matr == NULL)
	{
		free(matr);
		return (NULL);
	}
	for (; k < nmeb; k++)
		matr[k] = 0;
	return (matr);
}
