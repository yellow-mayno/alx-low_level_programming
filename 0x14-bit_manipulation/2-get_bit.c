/**
* get_bit - get the n-th bit starting from the lowest
* @n: unsigned int
* @index: the index ,??? xD
* Return: the bit
*/
int get_bit(unsigned int n, unsigned int index)
{
	return ((n >> index) & 1);
}
