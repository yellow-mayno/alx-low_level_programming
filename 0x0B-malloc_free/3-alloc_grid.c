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

	matr = malloc(h * sizeof(int *));
	for (i = 0; i < h; i++)
		matr[i] = malloc(w * sizeof(int));
	return (matr);
}
