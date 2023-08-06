#include <stddef.h>
/**
* get_bit - get the n-th bit starting from the lowest
* @n: unsigned int
* @index: the index ,??? xD
* Return: the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int))
		return (-1);
	return ((n >> index) & 1);
}
