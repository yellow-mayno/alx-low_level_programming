/**
* get_endianness - big or little endian
* Return: 1 for little
*/
int get_endianness(void)
{
	return (~(1 >> 1));
}
