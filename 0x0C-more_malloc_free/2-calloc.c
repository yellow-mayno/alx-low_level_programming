#include <stdlib.h>
/**
* _calloc - dfsdf
* @nmeb: dsfgdfg
* @size: dsfgds
* Return: sdff
*/
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *matr;

	if (nmeb == 0 || size == 0)
		return (NULL);
	matr = malloc(nmeb * size);
	if (matr == NULL)
	{
		return (NULL);
	}
	return (matr);
}
