#include "main.h"
#include <stdio.h>
/**
* clar_bit - set bit at index to 0
* @n: the adress of the unsigned int
* @index: the index
* Return: 1 or -1 (depending on success)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n = ~(*n);
	set_bit(n, index);
	*n = ~(*n);
	return (1);
}
