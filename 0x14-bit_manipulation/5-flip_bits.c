#include <stddef.h>
#include "main.h"
/**
* flip_bits - count the number of bits to be fliped
* @n: the first number
* @m: the second number
* Return: the number of differences between the two strings of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0, i = 0;
	unsigned long int only_different;

	only_different = (~n & m) | (n & ~m);
	for (; i < sizeof(unsigned long int) * 8; i++)
		cnt += ((only_different >> i) & 1);
	return (cnt);
}
