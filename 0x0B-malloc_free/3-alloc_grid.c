#include <stdlib.h>
#include <stdio.h>
/**
* alloc_grid - dsfsdfs
* @w: sdfsd
* @h: sdfsd
* Return: sdfds
*/
int **alloc_grid(int w, int h)
{
	int i;
	int **matr;

	if (w <= 0 || h <= 0)
		return (NULL);
	matr = malloc(h * sizeof(int *));
	if (matr == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		matr[i] = malloc(w * sizeof(int));
		if (matr[i] == NULL)
			return (NULL);
	}
	return (matr);
}
